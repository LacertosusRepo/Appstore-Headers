//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTThemableView.h"

@class NSString, SPTLayoutConstraintBuilder, SPTProfileCounterWithLabelView, SPTTheme, UIButton, UIStackView;

@interface SPTProfileCountsView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    id <SPTProfileCountsViewDelegate> _delegate;
    UIButton *_playlistsButton;
    UIButton *_followersButton;
    UIButton *_followingButton;
    UIStackView *_buttonsStackView;
    SPTProfileCounterWithLabelView *_playlistsCounterWithLabelView;
    SPTProfileCounterWithLabelView *_followersCounterWithLabelView;
    SPTProfileCounterWithLabelView *_followingCounterWithLabelView;
    SPTLayoutConstraintBuilder *_layout;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) SPTProfileCounterWithLabelView *followingCounterWithLabelView; // @synthesize followingCounterWithLabelView=_followingCounterWithLabelView;
@property(retain, nonatomic) SPTProfileCounterWithLabelView *followersCounterWithLabelView; // @synthesize followersCounterWithLabelView=_followersCounterWithLabelView;
@property(retain, nonatomic) SPTProfileCounterWithLabelView *playlistsCounterWithLabelView; // @synthesize playlistsCounterWithLabelView=_playlistsCounterWithLabelView;
@property(retain, nonatomic) UIStackView *buttonsStackView; // @synthesize buttonsStackView=_buttonsStackView;
@property(retain, nonatomic) UIButton *followingButton; // @synthesize followingButton=_followingButton;
@property(retain, nonatomic) UIButton *followersButton; // @synthesize followersButton=_followersButton;
@property(retain, nonatomic) UIButton *playlistsButton; // @synthesize playlistsButton=_playlistsButton;
@property(nonatomic) __weak id <SPTProfileCountsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)headerButtonTouchUpInside:(id)arg1;
- (void)updateWithFollowData:(id)arg1;
- (void)updateWithProfileUserEntity:(id)arg1;
- (void)updateWithProfileViewModelData:(id)arg1;
- (void)addFollowingContainerConstraints;
- (void)addFollowersContainerConstraints;
- (void)addPlaylistContainerConstraints;
- (void)addContainersConstraints;
- (void)addButtonsStackViewConstraints;
- (void)setupCountersWithLabels;
- (void)setupButtons;
- (void)setupButtonsStackView;
- (void)setupView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

