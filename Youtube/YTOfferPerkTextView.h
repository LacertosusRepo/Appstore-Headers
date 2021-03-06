//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTPerkViewProtocol.h"

@class NSString, UITapGestureRecognizer, YTFormattedStringLabel, YTICommand;

@interface YTOfferPerkTextView : UIView <YTPerkViewProtocol>
{
    YTFormattedStringLabel *_label;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <YTFormattedStringLabelDelegate> _formattedStringLabelDelegate;
    double _preferredPadding;
    UIView *_separator;
    YTICommand *_command;
}

- (void).cxx_destruct;
- (id)thumbnailMappings;
- (struct UIEdgeInsets)preferredEdgeInset;
- (void)didTapEndpoint;
- (void)layoutSubviews;
- (void)sizeHeightToFitWithWidth:(double)arg1;
- (void)dealloc;
- (id)initWithOfferPerkTextRenderer:(id)arg1 formattedStringLabelDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

