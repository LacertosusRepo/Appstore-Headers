//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "GLUEStyleable-Protocol.h"

@class NSString;

@interface UIScrollView (CoverflowEffect) <GLUEStyleable>
- (void)spt_applyCoverFlowerEffectToSubviews:(id)arg1 pageWidth:(double)arg2 minimumSubviewScale:(double)arg3 usePerspectiveEffect:(_Bool)arg4 verticalMode:(_Bool)arg5;
- (void)glue_applyStyle:(id)arg1;
- (void)spt_scrollToTopAnimated:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
