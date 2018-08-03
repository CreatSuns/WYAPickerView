//
//  WYASinglePickerView.h
//  WYAPickerView_Example
//
//  Created by 李世航 on 2018/7/20.
//  Copyright © 2018年 1228506851@qq.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SingleDelegate <NSObject>

@required
- (void)singleWithPickerView:(UIView *)pickerView ResultString:(NSString *)result;

@end

@interface WYASinglePickerView : UIView

@property (nonatomic, weak)   id <SingleDelegate> delegate;

/**
 取消按钮正常状态字体颜色
 */
@property (nonatomic, strong) UIColor * cancelButtonColor;

/**
 取消按钮正常状态字体大小
 */
@property (nonatomic, strong) UIFont * cancelButtonFont;

/**
 确定按钮正常状态字体颜色
 */
@property (nonatomic, strong) UIColor * sureButtonColor;

/**
 确定按钮正常状态字体大小
 */
@property (nonatomic, strong) UIFont * sureButtonFont;

/**
 标题字体颜色
 */
@property (nonatomic, strong) UIColor * titleColor;

/**
 标题字体大小
 */
@property (nonatomic, strong) UIFont * titleFont;

/**
 设置pickerView整体字体颜色
 */
@property (nonatomic, strong) UIColor * pickerItemColor;

/**
 设置pickerView整体字体大小
 */
@property (nonatomic, strong) UIFont * pickerItemFont;

/**
 设置pickerView高度
 */
@property (nonatomic, assign) CGFloat    pickerHeight;

/**
 设置pickerView的Item高度
 */
@property (nonatomic, assign) CGFloat    pickerItemHeight;

@property (nonatomic, strong) NSArray * dataSource;

- (void)show;

@end
