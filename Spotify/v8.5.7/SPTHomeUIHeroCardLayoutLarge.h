//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeUIHeroCardLayout-Protocol.h"

@class NSString;

@interface SPTHomeUIHeroCardLayoutLarge : NSObject <SPTHomeUIHeroCardLayout>
{
}

- (void)updateCardWidthConstraintWithRatio:(double)arg1 constraints:(id)arg2 heroCardView:(id)arg3 cardView:(id)arg4;
- (struct CGSize)sizeForDisplayingTitle:(id)arg1 subtitle:(id)arg2 containerViewSize:(struct CGSize)arg3 theme:(id)arg4 style:(id)arg5;
- (struct NSDictionary *)updateConstraints:(struct NSDictionary *)arg1 withStyle:(id)arg2 heroCardView:(id)arg3 cardView:(id)arg4 title:(id)arg5 subtitle:(id)arg6;
- (struct NSDictionary *)addConstraintsForHeroCardView:(id)arg1 cardView:(id)arg2 imageView:(id)arg3 detailsView:(id)arg4 gradientView:(id)arg5 layoutConstraints:(id)arg6;
- (void)setUpDetailsViewHierarchy:(id)arg1 withHeroView:(id)arg2 cardView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
