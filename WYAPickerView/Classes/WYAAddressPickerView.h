//
//  WYAPickerView.h
//  WYAPickerView_Example
//
//  Created by 李世航 on 2018/7/19.
//  Copyright © 2018年 1228506851@qq.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AddressDelegate <NSObject>

-(void)addressWithProvince:(NSString *)province City:(NSString *)city Area:(NSString *)area;

@end

@interface WYAAddressPickerView : UIView

@property (nonatomic, weak)   id <AddressDelegate> delegate;

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

@property (nonatomic, strong) UIColor * pickerFristItemColor;

@property (nonatomic, strong) UIColor * pickerSecondItemColor;

@property (nonatomic, strong) UIColor * pickerThirdItemColor;

/**
 设置pickerView整体字体大小
 */
@property (nonatomic, strong) UIFont * pickerItemFont;

@property (nonatomic, strong) UIFont * pickerFristItemFont;

@property (nonatomic, strong) UIFont * pickerSecondItemFont;

@property (nonatomic, strong) UIFont * pickerThirdItemFont;

/**
 设置pickerView高度
 */
@property (nonatomic, assign) CGFloat    pickerHeight;

/**
 设置pickerView的Item高度
 */
@property (nonatomic, assign) CGFloat    pickerItemHeight;

- (void)show;

@end
