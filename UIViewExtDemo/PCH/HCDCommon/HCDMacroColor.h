//
//  HCDMacroColor.h
//  UIViewExtDemo
//
//  Created by henry on 2018/10/17.
//  Copyright © 2018年 henry. All rights reserved.
//

#ifndef HCDMacroColor_h
#define HCDMacroColor_h

//颜色
#define kRGBColor(r, g, b)  [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
#define kRGBAColor(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(r)/255.0 blue:(r)/255.0 alpha:a]
#define kRandomColor           kRGBColor(arc4random_uniform(256),arc4random_uniform(256),arc4random_uniform(256))

#define kColorWithHex(rgbValue) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16)) / 255.0 \
green:((float)((rgbValue & 0xFF00) >> 8)) / 255.0 \
blue:((float)(rgbValue & 0xFF)) / 255.0 alpha:1.0]


#endif /* HCDMacroColor_h */
