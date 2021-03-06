//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVideoEventObserver-Protocol.h"

@class NSString, SPTRequestAccounting;

@interface SPTVideoPlaybackRequestAccounting : NSObject <SPTVideoEventObserver>
{
    SPTRequestAccounting *_requestAccounting;
}

@property(retain, nonatomic) SPTRequestAccounting *requestAccounting; // @synthesize requestAccounting=_requestAccounting;
- (void).cxx_destruct;
- (void)videoPlaybackDidTransferBytes:(long long)arg1 bitrate:(double)arg2 transferDuration:(double)arg3;
- (id)initWithRequestAccounting:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

