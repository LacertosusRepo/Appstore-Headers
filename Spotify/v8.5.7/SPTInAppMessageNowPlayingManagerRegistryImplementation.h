//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageNowPlayingManagerRegistry-Protocol.h"

@class NSString;

@interface SPTInAppMessageNowPlayingManagerRegistryImplementation : NSObject <SPTInAppMessageNowPlayingManagerRegistry>
{
    CDUnknownBlockType _observerBlock;
}

@property(copy, nonatomic) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
- (void).cxx_destruct;
- (_Bool)nowPlayingViewHidden;
- (void)setNowPlayingViewVisibilityObserverBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

