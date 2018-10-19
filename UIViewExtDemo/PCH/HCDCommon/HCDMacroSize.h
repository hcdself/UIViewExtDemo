//
//  HCDMacroSize.h
//  UIViewExtDemo
//
//  Created by henry on 2018/10/17.
//  Copyright © 2018年 henry. All rights reserved.
//

#ifndef HCDMacroSize_h
#define HCDMacroSize_h

//当前屏幕方向
#define kCurrentOrientation [UIApplication sharedApplication].statusBarOrientation

//获取屏幕宽度与高度
#define kScreenWidth [UIScreen mainScreen].bounds.size.width
#define kScreenHeight [UIScreen mainScreen].bounds.size.height
#define kScreenSize [UIScreen mainScreen].bounds.size
#define kScreenBounds [UIScreen mainScreen].bounds
#define kScreenAspectRatio kScreenWidth/kScreenHeight
#define kScreenMaxLength (MAX(kScreenWidth, kScreenHeight))
#define kScreenMinLength (MIN(kScreenWidth, kScreenHeight))

/**适配安全区域
 使用发现:
 对于window
    对于所有ios设备，如果状态栏隐藏，刚启动app时，在执行window的makeKeyAndVisible前，statusBarFrame高度不为0，而在根控制器的viewDidLoad中为0。
    对于不是刘海屏的设备，如果状态栏隐藏，刚启动app时，在执行window的makeKeyAndVisible前，safeAreaInsets高度不为0，而在根控制器的viewDidLoad中为0
    对于刘海屏设备，启动前后，safeAreaInsets始终不变
 */
#define kSafeAreaInsets \
^(){\
if (@available(iOS 11.0, *)) {\
    return  [UIApplication sharedApplication].delegate.window.safeAreaInsets; \
} else {\
    return UIEdgeInsetsMake([UIApplication sharedApplication].statusBarFrame.size.height, 0, 0, 0);\
}\
}()

//计算文本尺寸
#define kSystemFontTextSize(text, fontSize, width) [text boundingRectWithSize:CGSizeMake(width, MAXFLOAT) options:NSStringDrawingUsesLineFragmentOrigin attributes:@{NSFontAttributeName:[UIFont systemFontOfSize:fontSize]} context:nil].size

#define kCustomFontTextSize(text, font, width) [text boundingRectWithSize:CGSizeMake(width, MAXFLOAT) options:NSStringDrawingUsesLineFragmentOrigin attributes:@{NSFontAttributeName:font} context:nil].size

#endif /* HCDMacroSize_h */
