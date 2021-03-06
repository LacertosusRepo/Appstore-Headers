//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTPodcastUIAccessoryIconButton.h"

#import "SPTPodcastUIDownloadButton-Protocol.h"

@class NSString, UIView;
@protocol GLUEAnimationLoading><GLUEAnimationControlling><GLUEAnimationLottieStyling, GLUETheme;

@interface SPTPodcastUIAccessoryIconDownloadButton : SPTPodcastUIAccessoryIconButton <SPTPodcastUIDownloadButton>
{
    long long _currentStatus;
    struct UIView *_animationView;
    id <GLUETheme> _theme;
}

+ (id)accessibilityLabelForStatus:(long long)arg1;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIView<GLUEAnimationLoading><GLUEAnimationControlling><GLUEAnimationLottieStyling> *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) long long currentStatus; // @synthesize currentStatus=_currentStatus;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (id)nameForAnimationForStatus:(long long)arg1;
- (id)nameForTransitionFromStatus:(long long)arg1 toStatus:(long long)arg2;
- (void)animateStatus:(long long)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)updateOfflineSyncStatus:(long long)arg1 withTheme:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

