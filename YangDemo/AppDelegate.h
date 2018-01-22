//
//  AppDelegate.h
//  YangDemo
//
//  Created by secoo_yonghui on 2018/1/22.
//  Copyright © 2018年 secoo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

