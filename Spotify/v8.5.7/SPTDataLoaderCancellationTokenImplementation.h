//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderCancellationToken-Protocol.h"

@class NSString;
@protocol SPTDataLoaderCancellationTokenDelegate;

@interface SPTDataLoaderCancellationTokenImplementation : NSObject <SPTDataLoaderCancellationToken>
{
    _Bool _cancelled;
    id <SPTDataLoaderCancellationTokenDelegate> _delegate;
    id _objectToCancel;
}

+ (id)cancellationTokenImplementationWithDelegate:(id)arg1 cancelObject:(id)arg2;
@property(readonly, nonatomic) id objectToCancel; // @synthesize objectToCancel=_objectToCancel;
@property(readonly, nonatomic) __weak id <SPTDataLoaderCancellationTokenDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithDelegate:(id)arg1 cancelObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

