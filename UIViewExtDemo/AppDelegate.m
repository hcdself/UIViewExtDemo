//
//  AppDelegate.m
//  UIViewExtDemo
//
//  Created by henry on 2018/5/29.
//  Copyright © 2018年 henry. All rights reserved.
//

#import "AppDelegate.h"
#import "ViewController.h"
#import "PCH/HCDCommon/HCDMacroNeddCombinate.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

    //NSLog(@"%s",__func__,__LINE__,__FILE__);

    [UIApplication sharedApplication].statusBarHidden = YES;
//
//    self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
//    self.window.backgroundColor = [UIColor whiteColor];
//    
//
//    UIViewController *ctr = [[ViewController alloc] init];
//    self.window.rootViewController = ctr;

    UIEdgeInsets edg = [UIApplication sharedApplication].delegate.window.safeAreaInsets;
    NSLog(@"1safeAreaInsets--%@",NSStringFromUIEdgeInsets(edg));
    NSLog(@"2safeAreaInsets--%@",NSStringFromUIEdgeInsets(kSafeAreaInsets));
    NSLog(@"刘海屏:%d",kIsIphoneXScreen);
    NSLog(@"rect3--%@",NSStringFromCGRect([UIApplication sharedApplication].statusBarFrame));
    
    
    
    [self.window makeKeyAndVisible];



    
    return YES;
}

@end
