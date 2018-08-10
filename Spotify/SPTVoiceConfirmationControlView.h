//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTVoiceConfirmationControlViewModelDelegate.h"

@class NSString, SPTVoiceConfirmationControlViewModel, UIImageView;

@interface SPTVoiceConfirmationControlView : UIView <SPTVoiceConfirmationControlViewModelDelegate>
{
    UIImageView *_actionImageView;
    SPTVoiceConfirmationControlViewModel *_controlViewModel;
}

@property(readonly, nonatomic) SPTVoiceConfirmationControlViewModel *controlViewModel; // @synthesize controlViewModel=_controlViewModel;
@property(retain, nonatomic) UIImageView *actionImageView; // @synthesize actionImageView=_actionImageView;
- (void).cxx_destruct;
- (void)confirmationControlViewModelDidUpdate:(id)arg1;
- (void)updateWithViewModel:(id)arg1;
- (void)setupLayout;
- (void)setupViews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
