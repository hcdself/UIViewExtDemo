//
//  NSDictionary+HCDCategory.m
//  ColorDemo
//
//  Created by henry on 2018/7/30.
//  Copyright © 2018年 henry. All rights reserved.
//

#import "NSDictionary+HCDCategory.h"

@implementation NSDictionary (HCDCategory)

/**
 解决打印汉字时乱码的问题
 该方法会执行多次
 */
- (NSString *)descriptionWithLocale:(id)locale indent:(NSUInteger)level {
    NSMutableString *string = [NSMutableString string];
    // 开头拼接{
    [string appendString:@"{\n"];
    // 遍历所有的键值对
    [self enumerateKeysAndObjectsUsingBlock:^(id key, id value, BOOL *stop) {
        [string appendFormat:@"\t%@ = %@;\n", key,value];
    }];
    //删除末尾多余的一个分号(系统的没删)
    //    NSRange range = [string rangeOfString:@";" options:NSBackwardsSearch];
    //    if(range.location != NSNotFound){
    //        [string deleteCharactersInRange:range];
    //    }
    // 结尾拼接}
    [string appendString:@"}"];
    return string;
}

@end
