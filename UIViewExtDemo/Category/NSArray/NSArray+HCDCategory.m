//
//  NSArray+HCDCategory.m
//  ColorDemo
//
//  Created by henry on 2018/7/30.
//  Copyright © 2018年 henry. All rights reserved.
//

#import "NSArray+HCDCategory.h"

@implementation NSArray (HCDCategory)

/**
 解决打印汉字时乱码的问题
 该方法会执行多次
 */
- (NSString *)descriptionWithLocale:(id)locale indent:(NSUInteger)level {
    NSMutableString *string = [NSMutableString string];
    // 开头拼接(
    [string appendString:@"(\n"];
    // 遍历
    [self enumerateObjectsUsingBlock:^(id  _Nonnull value, NSUInteger idx, BOOL * _Nonnull stop) {
        [string appendFormat:@"\t%@,\n",value];
    }];
    //删除末尾多余的一个逗号(系统的也会删除)
    NSRange range = [string rangeOfString:@"," options:NSBackwardsSearch];
    if(range.location != NSNotFound){
        [string deleteCharactersInRange:range];
    }
    // 结尾拼接)
    [string appendString:@")"];
    return string;
}

@end
