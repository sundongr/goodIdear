//
//  AppDelegate.h
//  HelloGitHub
//
//  Created by 孙东日 on 2018/5/9.
//  Copyright © 2018年 孙东日. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

