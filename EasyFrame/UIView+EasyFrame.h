//
//  UIView+EasyFrame.h
//  我的网易彩票
//
//  Created by 张 锐 on 15/6/14.
//  Copyright (c) 2015年 张 锐. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (EasyFrame)

@property(nonatomic, assign) CGFloat x;

@property(nonatomic, assign) CGFloat y;

@property(nonatomic, assign) CGFloat width;

@property(nonatomic, assign) CGFloat height;

@property (nonatomic, assign) CGSize size;

@property (nonatomic, assign) CGFloat centerX;

@property (nonatomic, assign) CGFloat centerY;
/**
 *  相对[父控件]的最大X
 */
@property (nonatomic,assign) CGFloat maxX;
/**
 *  相对[父控件]的最大Y
 */
@property (nonatomic,assign) CGFloat maxY;
/**
 *  (只取)自己的真实中心X
 */
@property (nonatomic,assign) CGFloat self_midX;
/**
 *  (只取)自己的真实中心Y
 */
@property (nonatomic,assign) CGFloat self_midY;
/**
 *  (只取)自己的真实中心center
 */
@property (nonatomic,assign) CGPoint self_center;

@end
