//
//  HCDMacroSize.h
//  UIViewExtDemo
//
//  Created by henry on 2018/10/17.
//  Copyright © 2018年 henry. All rights reserved.
//

#ifndef HCDMacroSize_h
#define HCDMacroSize_h

//获取屏幕宽度与高度
#define kScreenWidth [UIScreen mainScreen].bounds.size.width
#define kScreenHeight [UIScreen mainScreen].bounds.size.height
#define kScreenSize [UIScreen mainScreen].bounds.size
#define kScreenBounds [UIScreen mainScreen].bounds
#define kScreenAspectRatio kScreenWidth/kScreenHeight

#define kStatusBarHeight [UIApplication sharedApplication].statusBarFrame.size.height


#define NavigationBarHeight 44
#define StatusBarHeight 20
#define TopBarHeight 64
#define ToolBarHeight 44
#define TabBarHeight 49

#define iPhone4_W 320
#define iPhone4_H 480
#define iPhone5_W 320
#define iPhone5_H 568
#define iPhone6_W 375
#define iPhone6_H 667
#define iPhone6P_W 414
#define iPhone6P_H 736

//计算文本尺寸
#define kSystemFontTextSize(text, fontSize, width) [text boundingRectWithSize:CGSizeMake(width, MAXFLOAT) options:NSStringDrawingUsesLineFragmentOrigin attributes:@{NSFontAttributeName:[UIFont systemFontOfSize:fontSize]} context:nil].size

#define kCustomFontTextSize(text, font, width) [text boundingRectWithSize:CGSizeMake(width, MAXFLOAT) options:NSStringDrawingUsesLineFragmentOrigin attributes:@{NSFontAttributeName:font} context:nil].size

#endif /* HCDMacroSize_h */
