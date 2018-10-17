//
//  HCDMacroPath.h
//  UIViewExtDemo
//
//  Created by henry on 2018/10/17.
//  Copyright © 2018年 henry. All rights reserved.
//

#ifndef HCDMacroPath_h
#define HCDMacroPath_h

//获取沙盒Document路径
#define kDocumentPath [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject]
//获取沙盒temp路径
#define kTempPath NSTemporaryDirectory()
//获取沙盒Cache路径
#define kCachePath [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) firstObject]

//mainBundle中的文件的路径
#define kFilePathInMainBundle(NAME,EXT) [[NSBundle mainBundle] pathForResource:(NAME) ofType:(EXT)]

//加载图片
#define kImageWithName(NAME) [UIImage imageNamed:NAME]
#define kImageWithFilePath(filePath) [UIImage imageWithContentsOfFile:filePath]

#endif /* HCDMacroPath_h */
