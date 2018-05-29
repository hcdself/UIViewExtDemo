//
//  UIView+HCategory.m
//  UIViewExtDemo
//
//  Created by henry on //.
//  Copyright © 年 henry. All rights reserved.
//

#import "UIView+HCategory.h"

@implementation UIView (HCategory)

/**
 *  x 的set\get方法实现
 */
- (void)setX:(CGFloat)x {
    CGRect rect = self.frame;
    rect.origin.x = x;
    self.frame = rect;
}

- (CGFloat)x {
    return self.frame.origin.x;
}

/**
 *  y 的set\get方法实现
 */
- (void)setY:(CGFloat)y {
    CGRect rect = self.frame;
    rect.origin.y = y;
    self.frame = rect;
}
- (CGFloat)y {
    return self.frame.origin.y;
}

/**
 *  width 的set\get方法实现
 */
- (void)setWidth:(CGFloat)width {
    CGRect rect = self.frame;
    rect.size.width  =  width;
    self.frame = rect;
}
- (CGFloat)width {
    return self.frame.size.width;
}

/**
 *  height 的set\get方法实现
 */
- (void)setHeight:(CGFloat)height {
    CGRect rect = self.frame;
    rect.size.height = height;
    self.frame = rect;
}
- (CGFloat)height {
    return self.frame.size.height;
}

/**
 *  size 的set\get方法实现
 */
- (void)setSize:(CGSize)size {
    CGRect rect = self.frame;
    rect.size = size;
    self.frame = rect;
}
- (CGSize)size {
    return self.frame.size;
}

/**
 *  右边x 的set\get方法实现
 */
- (void)setRightX:(CGFloat)rightX {
    CGRect frame = self.frame;
    frame.origin.x = rightX - [self width];
    self.frame = frame;
    return;
}
- (CGFloat)rightX {
    return [self x] + [self width];
}
/**
 *  底部y 的set\get方法实现
 */
- (void)setBottomY:(CGFloat)bottomY {
    CGRect frame = self.frame;
    frame.origin.y = bottomY - [self height];
    self.frame = frame;
}
- (CGFloat)bottomY {
    return [self y] + [self height];
}

/**
 *  centerX 的set\get方法实现
 */
- (void)setCenterX:(CGFloat)centerX {
    self.center = CGPointMake(centerX, self.center.y);
}
- (CGFloat)centerX {
    return self.center.x;
}

/**
 *  centerY 的set\get方法实现
 */
- (void)setCenterY:(CGFloat)centerY {
    self.center = CGPointMake(self.center.x, centerY);
}
- (CGFloat)centerY {
    return self.center.y;
}

/**
 *  origin 的set\get方法实现
 */
- (void)setOrigin:(CGPoint)origin {
    CGRect frame = self.frame;
    frame.origin = origin;
    self.frame = frame;
    return;
}
- (CGPoint)origin {
    return self.frame.origin;
}

///移除此view上的所有子视图
- (void)removeAllSubviews {
    for (UIView *view in self.subviews) {
        [view removeFromSuperview];
    }
}


@end
