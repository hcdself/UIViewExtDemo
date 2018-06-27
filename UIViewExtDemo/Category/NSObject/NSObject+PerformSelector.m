//
//  NSObject+PerformSelector.m
//  CADisplayLinkDemo
//
//  Created by henry on 2018/6/27.
//  Copyright © 2018年 henry. All rights reserved.
//

#import "NSObject+PerformSelector.h"

@implementation NSObject (PerformSelector)

- (id)performSelector:(SEL)aSelector withArguments:(NSArray *)arguments {
    
    NSMethodSignature *signature = [[self class] instanceMethodSignatureForSelector:aSelector];
    
    if (signature == nil) {
        return nil;
    }
    
    NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:signature];
    invocation.target = self;
    invocation.selector = aSelector;
    
    NSInteger count = signature.numberOfArguments - 2;
    
    for (int i = 0; i< count; i++) {
        if (arguments.count-1 < i) {
            continue;
        }
        
        NSObject *object = arguments[i];
        [invocation setArgument:&object atIndex:i+2];
    }
    
    [invocation invoke];

    if (!signature.methodReturnLength) {
        return nil;
    } else {

        id returnObj = nil;
        [invocation getReturnValue:&returnObj];
        return returnObj;

    }
}

@end
