//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTFormattedStringLabelDelegate.h"
#import "YTIOfferGroupViewDelegate.h"
#import "YTPageStyleProvider.h"
#import "YTPageStyling.h"

@class NSArray, NSString, YTFormattedStringLabel, YTTvfilmSellableItemView;

@interface YTTvfilmRichOffersView : UIView <YTPageStyling, YTPageStyleProvider, YTIOfferGroupViewDelegate, YTFormattedStringLabelDelegate>
{
    id <YTTvfilmRichOffersViewDelegate> _delegate;
    NSArray *_groupViews;
    YTTvfilmSellableItemView *_itemView;
    YTFormattedStringLabel *_legalTextView;
    long long _pageStyle;
}

@property(nonatomic) long long pageStyle; // @synthesize pageStyle=_pageStyle;
- (void).cxx_destruct;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)offerGroupView:(id)arg1 didTapNavigationEndpoint:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithRenderer:(id)arg1 delegate:(id)arg2 gimme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
