//
//  NSObject+PerformSelector.h
//  CADisplayLinkDemo
//
//  Created by henry on 2018/6/27.
//  Copyright © 2018年 henry. All rights reserved.
//

/*!
 作用:拓展NSObject的performSelector方法
 
*/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSObject (PerformSelector)

/*
 局限：不能调用返回值为基本数据类型的方法
 */
- (id)performSelector:(SEL)aSelector withArguments:(NSArray *)arguments;

@end
