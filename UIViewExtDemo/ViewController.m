//
//  ViewController.m
//  UIViewExtDemo
//
//  Created by henry on 2018/5/29.
//  Copyright © 2018年 henry. All rights reserved.
//

#import "ViewController.h"
#import "PCH/HCDCommon/HCDMacroNeddCombinate.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    [UIApplication sharedApplication].statusBarHidden = NO;
    
    NSLog(@"rect4--%@",NSStringFromCGRect([UIApplication sharedApplication].statusBarFrame));
    
    NSLog(@"布局尺寸:%@",NSStringFromUIEdgeInsets(UIEdgeInsetsMake(kSafeTop, kSafeLeft, kSafeBottom, kSafeRight)));
    
    
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];

}
- (BOOL)prefersStatusBarHidden {
    return NO;
}

@end
