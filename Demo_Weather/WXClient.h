//
//  WXClient.h
//  
//
//  Created by game-netease-chuyou on 2018/6/1.
//
@import Foundation;
@import CoreLocation;
#import <Foundation/Foundation.h>
#import <ReactiveObjC.h>

@interface WXClient : NSObject

- (RACSignal *)fetchJSONFromURL:(NSURL *)url;
- (RACSignal *)fetchCurrentConditionsForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchHourlyForecastForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchDailyForecastForLocation:(CLLocationCoordinate2D)coordinate;
@end
