//
//  WYAViewController.m
//  WYAPickerView
//
//  Created by 1228506851@qq.com on 07/19/2018.
//  Copyright (c) 2018 1228506851@qq.com. All rights reserved.
//

#import "WYAViewController.h"
#import <WYAPickerView/WYAAddressPickerView.h>
#import <WYAPickerView/WYASinglePickerView.h>
@interface WYAViewController ()<AddressDelegate, SingleDelegate>




@end

@implementation WYAViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    
}
- (IBAction)ssdad:(id)sender {
//    WYAAddressPickerView * pickerView = [[WYAAddressPickerView alloc]init];
//    pickerView.delegate = self;
//    pickerView.cancelButtonColor = [UIColor redColor];
//    pickerView.sureButtonColor = [UIColor redColor];
//    pickerView.pickerHeight = 150;
//    [pickerView show];
    
    WYASinglePickerView * pickerView = [[WYASinglePickerView alloc]init];
    pickerView.delegate = self;
    pickerView.cancelButtonColor = [UIColor redColor];
    pickerView.sureButtonColor = [UIColor redColor];
    pickerView.pickerHeight = 150;
    pickerView.dataSource = @[@"haha",@"hehe"];
    [pickerView show];
}

- (void)singleWithResultString:(NSString *)result{
    NSLog(@"result==%@",result);
}

-(void)addressWithProvince:(NSString *)province City:(NSString *)city Area:(NSString *)area{
    NSLog(@"省=%@，市=%@，区=%@",province,city,area);
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
