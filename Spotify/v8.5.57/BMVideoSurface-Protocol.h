//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol BMPlaybackIdentity, BMVideoSurfaceContextDelegate, BMVideoSurfaceDelegate;

@protocol BMVideoSurface <NSObject>
@property(readonly, nonatomic) long long priority;
@property(readonly, nonatomic, getter=isFullscreen) _Bool fullscreen;
@property(nonatomic) __weak id <BMVideoSurfaceContextDelegate> contextDelegate;
@property(nonatomic) __weak id <BMVideoSurfaceDelegate> delegate;
@property(readonly, nonatomic) struct CGRect videoRect;
@property(nonatomic) long long gravity;
@property(readonly, nonatomic, getter=isAttached) _Bool attached;
@property(readonly, nonatomic) CDUnknownBlockType shouldDisplayVideoBlock;
- (void)detachVideoDisplayView;
- (void)attachVideoDisplayView:(UIView *)arg1;
- (_Bool)isPlayableForIdentity:(id <BMPlaybackIdentity>)arg1;
- (void)setGravity:(long long)arg1 animated:(_Bool)arg2;
@end

