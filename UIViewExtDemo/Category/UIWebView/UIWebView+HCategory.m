//
//  UIWebView+HCategory.m
//  UIViewExtDemo
//
//  Created by henry on 2018/5/29.
//  Copyright © 2018年 henry. All rights reserved.
//

#import "UIWebView+HCategory.h"

@implementation UIWebView (HCategory)
static BOOL diagStat = NO;

-(void)webView:(UIWebView *)sender runJavaScriptAlertPanelWithMessage:(NSString *)message initiatedByFrame:(id)frame{
    UIAlertView* dialogue = [[UIAlertView alloc]initWithTitle:nil message:message delegate:nil cancelButtonTitle:@"確定" otherButtonTitles:nil, nil];
    [dialogue show];;
}

-(BOOL)webView:(UIWebView *)sender runJavaScriptConfirmPanelWithMessage:(NSString *)message initiatedByFrame:(id)frame{
    UIAlertView* dialogue = [[UIAlertView alloc] initWithTitle:nil message:message delegate:self cancelButtonTitle:NSLocalizedString(@"ok", @"Ok") otherButtonTitles:NSLocalizedString(@"Cancel", @"Cancel"), nil];
    [dialogue show];
    while (dialogue.hidden==NO && dialogue.superview!=nil) {
        [[NSRunLoop mainRunLoop] runUntilDate:[NSDate dateWithTimeIntervalSinceNow:0.01f]];
    }
    return diagStat;
}

-(void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex{
    if (buttonIndex==0) {
        diagStat=YES;
    }else if(buttonIndex==1){
        diagStat=NO;
    }
}
@end
