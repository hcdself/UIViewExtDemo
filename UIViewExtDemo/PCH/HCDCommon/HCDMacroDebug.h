//
//  HCDMacroDebug.h
//  UIViewExtDemo
//
//  Created by henry on 2018/10/17.
//  Copyright © 2018年 henry. All rights reserved.
//

#ifndef HCDMacroDebug_h
#define HCDMacroDebug_h

//开发的时候打印，但是发布的时候不打印的NSLog
#ifdef DEBUG
#define kNSLog(...) NSLog(@"%s 第%d行 \n %@\n\n",__func__,__LINE__,[NSString stringWithFormat:__VA_ARGS__])
#else
#define kNSLog(...)
#endif

#define kNSLogFunction NSLog(@"%s 第%d行  %s",__FILE__,__LINE__,__func__)

//获取一段时间间隔
#define kStartTime CFAbsoluteTime start = CFAbsoluteTimeGetCurrent();
#define kEndTime   NSLog(@"Time: %f", CFAbsoluteTimeGetCurrent() - start)

#endif /* HCDMacroDebug_h */
