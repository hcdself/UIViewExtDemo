//
//  HCDMacroStorage.h
//  UIViewExtDemo
//
//  Created by henry on 2018/10/18.
//  Copyright © 2018年 henry. All rights reserved.
//

#ifndef HCDMacroStorage_h
#define HCDMacroStorage_h

/**
 沙盒存储
 */
#define kSetUserDefaults(object, key)\
({\
NSUserDefaults * defaults = [NSUserDefaults standardUserDefaults];\
[defaults setObject:object forKey:key];\
[defaults synchronize];\
})
//获取对象
#define kGetUserDefaults(key) [[NSUserDefaults standardUserDefaults] objectForKey:key]
//删除某一个对象
#define kRemoveUserDefaults(key)                                         \
({                                                                          \
NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];       \
[defaults removeObjectForKey:_key];                                     \
[defaults synchronize];                                                 \
})
//清除 NSUserDefaults 保存的所有数据
#define kRemoveAllUserDefaults  [[NSUserDefaults standardUserDefaults] removePersistentDomainForName:[[NSBundle mainBundle] bundleIdentifier]]


#endif /* HCDMacroStorage_h */
