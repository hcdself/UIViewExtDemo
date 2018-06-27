//
//  NSTimer+HCDCategory.h
//  CADisplayLinkDemo
//
//  Created by henry on 2018/6/26.
//  Copyright © 2018年 henry. All rights reserved.
//

/*!
 作用:拓展NSTiemr的方法,使用block，将target设置为计时器本身，避免循环引用
 
 */

#import <Foundation/Foundation.h>

@interface NSTimer (HCDCategory)

+ (NSTimer *)hcd_timerWithTimeInterval:(NSTimeInterval)interval repeats:(BOOL)repeats block:(void (^)(NSTimer *timer))block;

@end
