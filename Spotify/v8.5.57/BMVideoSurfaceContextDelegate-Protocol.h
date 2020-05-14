//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol BMVideoSurface;

@protocol BMVideoSurfaceContextDelegate <NSObject>
- (void)videoSurfacePriorityChanged:(UIView<BMVideoSurface> *)arg1;
- (void)videoSurfaceEligibleForAttachmentChanged:(UIView<BMVideoSurface> *)arg1;
- (void)videoSurfaceSizeDidChangeWhileAttached:(UIView<BMVideoSurface> *)arg1;
@end

