//
//  HCDMacroThread.h
//  UIViewExtDemo
//
//  Created by henry on 2018/10/17.
//  Copyright © 2018年 henry. All rights reserved.
//

#ifndef HCDMacroThread_h
#define HCDMacroThread_h

//使用时"block"替换成 "^{}"
#define kGCD_Main(block) dispatch_async(dispatch_get_main_queue(),block)

#define kGCD_Global_Queue_Default(block) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), block)

#define kGCD_Global_Queue_High(block) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0), block)

#define kGCD_Global_Queue_Low(block) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0), block)

#define kGCD_Global_Queue_Background(block) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_BACKGROUND, 0), block)

#endif /* HCDMacroThread_h */
