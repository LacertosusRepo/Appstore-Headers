//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTInnerTubeCellController.h"

#import "YTGameCardCellDelegate.h"

@class NSString, YTSubscribeSwitchController;

@interface YTGameCardCellController : YTInnerTubeCellController <YTGameCardCellDelegate>
{
    YTSubscribeSwitchController *_subscribeSwitchController;
}

- (void).cxx_destruct;
- (void)resetSubscribeSwitchController;
- (void)didTapOverflowButton:(id)arg1;
- (void)didTapGameCard;
- (void)setCell:(id)arg1;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

