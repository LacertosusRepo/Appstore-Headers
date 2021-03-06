//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol SPTTooltipItem;

@protocol SPTTooltipPresentationManager <NSObject>
- (id <SPTTooltipItem>)currentlyPresentedItem;
- (_Bool)isPresentingItem;
- (void)dismissCurrentItemAnimated:(_Bool)arg1;
- (void)dismissTooltip;
- (_Bool)isPresentingTooltipView:(UIView *)arg1;
- (_Bool)presentItem:(id <SPTTooltipItem>)arg1 anchorView:(UIView *)arg2 animated:(_Bool)arg3 statusChangeBlock:(void (^)(long long))arg4;
@end

