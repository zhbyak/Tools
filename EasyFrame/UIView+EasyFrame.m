//
//  UIView+EasyFrame.m
//  我的网易彩票
//
//  Created by 张 锐 on 15/6/14.
//  Copyright (c) 2015年 张 锐. All rights reserved.
//

#import "UIView+EasyFrame.h"

@implementation UIView (EasyFrame)
- (CGFloat)x {
  return self.frame.origin.x;
}

- (void)setX:(CGFloat)x {
  CGRect frame = self.frame;
  frame.origin.x = x;
  self.frame = frame;
}

- (CGFloat)y {
  return self.frame.origin.y;
}

- (void)setY:(CGFloat)y {
  CGRect frame = self.frame;
  frame.origin.y = y;
  self.frame = frame;
}


- (CGFloat)width {
    return self.frame.size.width;
}

- (void)setWidth:(CGFloat)width {
    CGRect frame = self.frame;
    frame.size.width = width;
    self.frame = frame;
}

- (CGFloat)height {
    return self.frame.size.height;
}

- (void)setHeight:(CGFloat)height{
    CGRect frame = self.frame;
    frame.size.height = height;
    self.frame = frame;
}


- (void)setCenterX:(CGFloat)centerX{
    CGPoint point = self.center;
    point.x = centerX;
    self.center = point;
}

- (CGFloat)centerX{
    return self.center.x;
}

- (void)setCenterY:(CGFloat)centerY{
    CGPoint point = self.center;
    point.y = centerY;
    self.center = point;
}

- (CGFloat)centerY{
    return self.center.y;
}

- (void)setSize:(CGSize)size{
    CGRect frame = self.frame;
    frame.size = size;
    self.frame = frame;
}


- (CGSize)size{
    return self.frame.size;
}

-(CGFloat)maxX{
    return CGRectGetMaxX(self.frame);
}

-(CGFloat)maxY{
    return CGRectGetMaxY(self.frame);
}

-(CGFloat)self_midX{
    return self.frame.size.width * 0.5;
}

-(CGFloat)self_midY{
    return self.frame.size.height * 0.5;
}




@end
