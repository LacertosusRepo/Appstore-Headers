//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol SPTMetaViewController;

@interface SPTConnectAccessButtonContainerView : UIView
{
    id <SPTMetaViewController> _metaViewController;
}

@property(retain, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)targetViewForTouchesOnSelf;
- (id)initWithMetaViewController:(id)arg1;

@end

