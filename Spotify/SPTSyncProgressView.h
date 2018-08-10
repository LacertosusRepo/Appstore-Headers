//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTThemableView.h"

@class NSString, UIActivityIndicatorView, UIColor, UILabel, UIProgressView;

@interface SPTSyncProgressView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIView *_contentView;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_textLabel;
    UIProgressView *_progressView;
    UIColor *_storedBackgroundColor;
}

+ (id)syncProgressView;
@property(retain, nonatomic) UIColor *storedBackgroundColor; // @synthesize storedBackgroundColor=_storedBackgroundColor;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)applyThemeLayout;
@property(retain, nonatomic) NSString *text;
@property(nonatomic) float progress;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

