//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTScannablesScanViewModel;
@protocol SPTScannable;

@protocol SPTScannablesScanViewModelDelegate <NSObject>
- (void)scannablesScanViewModel:(SPTScannablesScanViewModel *)arg1 didFailScanWithError:(NSError *)arg2;
- (void)scannablesScanViewModel:(SPTScannablesScanViewModel *)arg1 didScanScannable:(id <SPTScannable>)arg2;
@end

