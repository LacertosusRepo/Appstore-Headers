//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString;

@interface YTNGWatchCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    _Bool _panGestureDisabled;
    _Bool _panGestureSlopAngleEnabled;
    int _panGestureSlopAngle;
}

@property(nonatomic) int panGestureSlopAngle; // @synthesize panGestureSlopAngle=_panGestureSlopAngle;
@property(nonatomic, getter=isPanGestureSlopAngleEnabled) _Bool panGestureSlopAngleEnabled; // @synthesize panGestureSlopAngleEnabled=_panGestureSlopAngleEnabled;
@property(nonatomic, getter=isPanGestureDisabled) _Bool panGestureDisabled; // @synthesize panGestureDisabled=_panGestureDisabled;
- (void)setContentOffset:(struct CGPoint)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

