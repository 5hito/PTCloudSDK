//
//  PTResponder.h
//  PartnerSDK
//
//  Created by  on 2018/9/26.
//  Copyright © 2018年. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PTResponder : UIResponder

@property (strong, nonatomic) UIWindow *window;

- (void)applicationDidFinishLaunching:(UIApplication *)application withUmengKey:(NSString*)umengKey withCloudApplicationId:(NSString*)applicationId clientKey:(NSString *)clientKey;

@end

