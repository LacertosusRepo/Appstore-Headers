//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString;

@interface SPTArtistGalleryTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    long long _transitionType;
    struct CGRect _sourceRect;
}

@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initForTransition:(long long)arg1 sourceRect:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

