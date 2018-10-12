//
//  PartnerSDK.h
//  PartnerSDK
//
//  Created by on 2018/10/12.
//  Copyright © 2018年. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PartnerSDK : NSObject

+ (instancetype)sharedSDK;

+ (void)showPrivacyViewController:(UIViewController*)rootController;

@end
