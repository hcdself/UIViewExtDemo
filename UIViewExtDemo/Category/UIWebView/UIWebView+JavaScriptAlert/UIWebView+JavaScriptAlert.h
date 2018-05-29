//
//  UIWebView+JavaScriptAlert.h
//  WebViewDemo
//
//  Created by henry on 2018/4/19.
//  Copyright © 2018年 henry. All rights reserved.
/**

 */

#import <UIKit/UIKit.h>

@interface UIWebView (JavaScriptAlert)

/**
 * 网页的弹出框在ios上弹出时标题是文件名，以下扩展拦截网页弹出框并进行自定义
 */
-(void)webView:(UIWebView *)sender runJavaScriptAlertPanelWithMessage:(NSString *)message initiatedByFrame:(id)frame;

-(BOOL)webView:(UIWebView *)sender runJavaScriptConfirmPanelWithMessage:(NSString *)message initiatedByFrame:(id)frame;

@end
