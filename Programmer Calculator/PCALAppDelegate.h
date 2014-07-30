//
//  PCALAppDelegate.h
//  Programmer Calculator
//
//  Created by Hou Yongchao on 14-7-30.
//  Copyright (c) 2014年 Hou Yongchao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PCALAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
