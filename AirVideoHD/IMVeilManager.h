//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMVeil, NSMutableArray, UIActivityIndicatorView, UIButton, UILabel, UIProgressView, UIView;

@interface IMVeilManager : NSObject
{
    UIView *background;
    UIView *containerView;
    UILabel *label;
    UILabel *description;
    UIActivityIndicatorView *activityIndicator;
    UIProgressView *progressView;
    UIButton *cancelButton;
    IMVeil *currentVeil;
    NSMutableArray *veils;
}

+ (id)instance;
- (void).cxx_destruct;
- (_Bool)isVeilVisible:(id)arg1;
- (void)removeVeil:(id)arg1;
- (void)updateVeil:(id)arg1;
- (void)showVeil:(id)arg1;
- (void)updateView;
- (void)doShowVeil:(id)arg1;
- (void)buildViewsIfNeeded;
- (void)updateValuesAndLayout;
- (void)cancelTapped:(id)arg1;
- (id)init;

@end

