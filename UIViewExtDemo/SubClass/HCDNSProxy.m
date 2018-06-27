//
//  HCDNSProxy.m
//  CADisplayLinkDemo
//
//  Created by henry on 2018/6/27.
//  Copyright © 2018年 henry. All rights reserved.
//

#import "HCDNSProxy.h"

@implementation HCDNSProxy
{
    NSObject *transformObject;
}

//需要模拟的对象
- (void)transformObject:(NSObject *)object {
    transformObject = object;
}

//执行方法
- (void)forwardInvocation:(NSInvocation *)invocation {
    SEL selector = invocation.selector;
    
    if ([transformObject respondsToSelector:selector]) {
        [invocation invokeWithTarget:transformObject];
    } else {
        [super forwardInvocation:invocation];
    }
}

//查询方法签名
- (NSMethodSignature *)methodSignatureForSelector:(SEL)sel {
    
    if ([transformObject respondsToSelector:sel]) {
        return [transformObject methodSignatureForSelector:sel];
    } else {
        return [super  methodSignatureForSelector:sel];
    }
}

@end
