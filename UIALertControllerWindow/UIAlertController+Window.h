//
//  UIAlertController+Window.h
//  ALertDemo
//
//  Created by yangyonghui on 2018/1/22.
//  Copyright © 2018年 yangyonghui. All rights reserved.
//

#import <objc/runtime.h>
#import <UIKit/UIKit.h>

@interface UIAlertController (Window)

- (void)show;
- (void)show:(BOOL)animated;

@end


@interface UIAlertController (Private)

@property (nonatomic, strong) UIWindow *alertWindow;

@end

