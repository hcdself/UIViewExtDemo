//
//  AppDelegate.m
//  UIViewExtDemo
//
//  Created by henry on 2018/5/29.
//  Copyright © 2018年 henry. All rights reserved.
//

#import "AppDelegate.h"



@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

    //NSLog(@"%s",__func__,__LINE__,__FILE__);
    
    [UIApplication sharedApplication].statusBarHidden = NO;
    [UIScreen mainScreen].nativeBounds.size.width/[UIScreen mainScreen].nativeScale;
    [UIScreen mainScreen].nativeBounds.size.height;
    
    
    
    CGRect rect = [UIScreen mainScreen].nativeBounds;
    NSLog(@"rect--%@--%.2f",NSStringFromCGRect(rect),[UIScreen mainScreen].nativeScale);
    
    CGSizeEqualToSize(CGSizeMake(320, 480), CGSizeMake(kNativeWidth,kNativeHeight))?:NO;
    
    CGSize size =  [UIScreen mainScreen].currentMode.size;
    NSLog(@"%@--%.2f",NSStringFromCGSize(size),[UIScreen mainScreen].currentMode.pixelAspectRatio);
    //UIInterfaceOrientationIsPortrait(0);


    

    
    
    
    
    
    return YES;
}

@end
