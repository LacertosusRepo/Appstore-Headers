//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIView;
@protocol SPTVideoSurface;

@protocol SPTVideoSurfaceManager <NSObject>
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic) NSArray *attachedSurfaces;
@property(readonly, nonatomic, getter=isAnySurfaceAttached) _Bool anySurfaceAttached;
- (UIView<SPTVideoSurface> *)createSurfaceFullscreen;
- (UIView<SPTVideoSurface> *)createSurface;
@end

