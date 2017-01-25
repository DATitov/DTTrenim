//
//  AppDelegate.h
//  DTTrenim
//
//  Created by Дмитрий on 25.01.17.
//  Copyright © 2017 Dmitrii Titov. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

