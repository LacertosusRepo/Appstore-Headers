//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTDataLoaderResponse;

@protocol SPTDataLoaderConsumptionObserver <NSObject>
- (void)endedRequestWithResponse:(SPTDataLoaderResponse *)arg1 bytesDownloaded:(int)arg2 bytesUploaded:(int)arg3;
@end

