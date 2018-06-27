//
//  NSTimer+HCDCategory.m
//  CADisplayLinkDemo
//
//  Created by henry on 2018/6/26.
//  Copyright © 2018年 henry. All rights reserved.
//

#import "NSTimer+HCDCategory.h"

@implementation NSTimer (HCDCategory)

+ (NSTimer *)hcd_timerWithTimeInterval:(NSTimeInterval)interval repeats:(BOOL)repeats block:(void (^)(NSTimer *timer))block{
    return [NSTimer scheduledTimerWithTimeInterval:interval target:self selector:@selector(startTimer:) userInfo:[block copy] repeats:YES];
}

+ (void)startTimer:(NSTimer *)timer {
    void (^block)(NSTimer *timer) = timer.userInfo;
    if (block) {
        block(timer);
    }
}


@end
