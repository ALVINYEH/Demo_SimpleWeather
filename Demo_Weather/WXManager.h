//
//  WXManager.h
//  Demo_Weather
//
//  Created by game-netease-chuyou on 2018/6/1.
//  Copyright © 2018年 chuyou. All rights reserved.
//

#import <Foundation/Foundation.h>
@import Foundation;
@import CoreLocation;
#import "WXCondition.h"
#import <ReactiveObjC.h>

@interface WXManager : NSObject <CLLocationManagerDelegate>

+ (instancetype) sharedManager;

@property (nonatomic, strong, readonly) CLLocation *currentLocation;
@property (nonatomic, strong, readonly) WXCondition *currentCondition;
@property (nonatomic, strong, readonly) NSArray *hourlyForecast;
@property (nonatomic, strong, readonly) NSArray *dailyForecast;

- (void)findCurrentLocation;

@end
