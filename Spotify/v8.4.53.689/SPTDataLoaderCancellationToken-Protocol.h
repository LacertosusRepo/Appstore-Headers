//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPTDataLoaderCancellationToken <NSObject>
@property(readonly, nonatomic) id objectToCancel;
@property(readonly, nonatomic) __weak id <SPTDataLoaderCancellationTokenDelegate> delegate;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (void)cancel;
@end

