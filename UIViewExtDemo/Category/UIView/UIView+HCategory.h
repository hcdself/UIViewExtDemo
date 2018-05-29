//
//  UIView+HCategory.h
//  UIViewExtDemo
//
//  Created by henry on 2018/5/29.
//  Copyright © 2018年 henry. All rights reserved.
/**
 在类别中通过@property添加属性时，只能声明属性及其set、get方法，但没有实现其set、get方法，需要自己实现：set、get方法
 */

#import <UIKit/UIKit.h>

@interface UIView (HCategory)

@property (nonatomic,assign) CGFloat x;
@property (nonatomic,assign) CGFloat y;
@property (nonatomic,assign) CGFloat width;
@property (nonatomic,assign) CGFloat height;
@property (nonatomic,assign) CGSize size;
@property (nonatomic,assign) CGFloat rightX;//最大x
@property (nonatomic,assign) CGFloat bottomY;//最大y
@property (nonatomic,assign) CGFloat centerX;
@property (nonatomic,assign) CGFloat centerY;
@property (nonatomic,assign) CGPoint origin;

///移除此view上的所有子视图
- (void)removeAllSubviews;
@end
