//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTDataLoaderCancellationTokenDelegate;

@protocol SPTDataLoaderCancellationToken <NSObject>
@property(readonly, nonatomic) id objectToCancel;
@property(readonly, nonatomic) __weak id <SPTDataLoaderCancellationTokenDelegate> delegate;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (void)cancel;
@end
