//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTPopupContainerView.h"

@class NSArray;

@interface SPTPopupButtonContainer : SPTPopupContainerView
{
    NSArray *_buttons;
    double _verticalButtonMargin;
}

@property(nonatomic) double verticalButtonMargin; // @synthesize verticalButtonMargin=_verticalButtonMargin;
@property(readonly, copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (void)rebuildConstraints;
- (id)initWithButtons:(id)arg1;

@end

