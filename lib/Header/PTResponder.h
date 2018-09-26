//
//  PTResponder.h
//  PTCloudSDK
//
//  Created by linshucan on 2018/9/26.
//  Copyright © 2018年 BeeApp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PTResponder : UIResponder

@property (strong, nonatomic) UIWindow *window;

- (void)applicationDidFinishLaunching:(UIApplication *)application withCloudApplicationId:(NSString*)applicationId clientKey:(NSString *)clientKey;

@end

