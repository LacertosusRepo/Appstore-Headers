//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTChart;
@protocol SPTChartEntityDataSource;

@protocol SPTChartEntityDataSourceDelegate <NSObject>
- (void)chartEntityDataSource:(id <SPTChartEntityDataSource>)arg1 didLoadChart:(SPTChart *)arg2;
- (void)chartEntityDataSource:(id <SPTChartEntityDataSource>)arg1 didEncounterError:(NSError *)arg2;
@end

