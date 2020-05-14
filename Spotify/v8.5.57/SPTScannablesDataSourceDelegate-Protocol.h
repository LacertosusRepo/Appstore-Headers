//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTScannable, SPTScannablesDataSource;

@protocol SPTScannablesDataSourceDelegate <NSObject>
- (void)scannablesDataSource:(id <SPTScannablesDataSource>)arg1 didFailFetchingScannableWithError:(NSError *)arg2;
- (void)scannablesDataSource:(id <SPTScannablesDataSource>)arg1 didFinishFetchingScannable:(id <SPTScannable>)arg2;
@end
