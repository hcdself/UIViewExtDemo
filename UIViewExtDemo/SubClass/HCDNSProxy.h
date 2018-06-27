//
//  HCDNSProxy.h
//  CADisplayLinkDemo
//
//  Created by henry on 2018/6/27.
//  Copyright © 2018年 henry. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 作用：模拟某个对象，调用其方法
 
 使用举例：
 //创建proxy
 HCDNSProxy *proxy = [HCDNSProxy alloc];
 //模拟APPDelegate类
 [proxy transformObject:[UIApplication sharedApplication].delegate];
 //执行APPDelegate类中的方法
 [proxy performSelector:@selector(test)];
 
 */

@interface HCDNSProxy : NSProxy

//模拟的对象
- (void)transformObject:(NSObject *)object;

@end
