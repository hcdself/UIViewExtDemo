//
//  HCDMacroDevice.h
//  UIViewExtDemo
//
//  Created by henry on 2018/10/17.
//  Copyright © 2018年 henry. All rights reserved.
//

#ifndef HCDMacroDevice_h
#define HCDMacroDevice_h

/**真机还是模拟器*/

#if TARGET_OS_IPHONE
//真机
#endif
#if TARGET_IPHONE_SIMULATOR
//模拟器
#endif

/** 设备判断 */
#define kIsIPhone (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define kIsIPad (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

/** 设备信息 */
#define kAppVersion [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
#define kAppBuildVersion [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"]
#define kAppName  [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleDisplayName"]
#define kSystemVersion [[[UIDevice currentDevice] systemVersion] floatValue]
#define kDeviceUUIDStr [[UIDevice currentDevice].identifierForVendor UUIDString]
#define kCurrentLanguage [[NSLocale currentLocale] objectForKey:NSLocaleLanguageCode]
#define kCurrentCountry [[NSLocale currentLocale] objectForKey:NSLocaleCountryCode]

/** 设备型号判断 */

//不论屏幕旋转与否，nativeBounds值不会改变
#define kNativeBounds [UIScreen mainScreen].nativeBounds
#define kNativeScale [UIScreen mainScreen].nativeScale
#define kNativeWidth (kNativeBounds.size.width/kNativeScale)
#define kNativeHeight (kNativeBounds.size.width/kNativeScale)

//iphone
#define kiPhone4     CGSizeEqualToSize(CGSizeMake(320, 480), CGSizeMake(kNativeWidth,kNativeHeight))
#define kiPhone5     CGSizeEqualToSize(CGSizeMake(320, 568), CGSizeMake(kNativeWidth,kNativeHeight))
#define kiPhone6     CGSizeEqualToSize(CGSizeMake(375, 667), CGSizeMake(kNativeWidth,kNativeHeight))
#define kiPhone6Plus CGSizeEqualToSize(CGSizeMake(414, 736), CGSizeMake(kNativeWidth,kNativeHeight))
#define kiPhoneX CGSizeEqualToSize(CGSizeMake(375, 812), CGSizeMake(kNativeWidth,kNativeHeight))
#define kiPhoneXR CGSizeEqualToSize(CGSizeMake(414, 896), CGSizeMake(kNativeWidth,kNativeHeight))

//ipad
#define kipadSize97 CGSizeEqualToSize(CGSizeMake(768, 1024), CGSizeMake(kNativeWidth,kNativeHeight))
#define kipadSize105 CGSizeEqualToSize(CGSizeMake(834, 1112), CGSizeMake(kNativeWidth,kNativeHeight))
#define kipadSize129 CGSizeEqualToSize(CGSizeMake(1024, 1336), CGSizeMake(kNativeWidth,kNativeHeight))

/**ios版本判断*/

//检查系统版本
#define kSystemVersionEqualTo(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)

#define kSystemVersionGreaterTo(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)

#define kSystemVersionGreaterOrEqualTo(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)

#define kSystemVersionLessTo(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)

#define kSystemVersionLessOrEqualTo(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

/** 判断系统为64位还是32位 */
#if __LP64__
//NSLog(@"64");
#else
//NSLog(@"32");
#endif

#endif /* HCDMacroDevice_h */
