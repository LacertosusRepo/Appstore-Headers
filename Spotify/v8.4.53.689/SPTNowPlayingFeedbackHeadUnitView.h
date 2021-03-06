//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingBaseHeadUnitView.h"

@class SPTLayoutConstraintBuilder, SPTNowPlayingFeedbackButton, SPTTheme;

@interface SPTNowPlayingFeedbackHeadUnitView : SPTNowPlayingBaseHeadUnitView
{
    SPTNowPlayingFeedbackButton *_negativeFeedbackButton;
    SPTNowPlayingFeedbackButton *_positiveFeedbackButton;
    SPTTheme *_theme;
    SPTLayoutConstraintBuilder *_feedbackLayout;
}

@property(retain, nonatomic) SPTLayoutConstraintBuilder *feedbackLayout; // @synthesize feedbackLayout=_feedbackLayout;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTNowPlayingFeedbackButton *positiveFeedbackButton; // @synthesize positiveFeedbackButton=_positiveFeedbackButton;
@property(readonly, nonatomic) SPTNowPlayingFeedbackButton *negativeFeedbackButton; // @synthesize negativeFeedbackButton=_negativeFeedbackButton;
- (void).cxx_destruct;
- (void)forceUpdateConstraints;
- (void)updateConstraints;
- (id)initWithTheme:(id)arg1;

@end

