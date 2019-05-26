//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEButton, GLUEGradientView, NSLayoutConstraint, NSString, SPTFreeTierTasteOnboardingArtistPickerCollectionViewLayout, UICollectionView, UIStackView;

@interface SPTFreeTierTasteOnboardingArtistPickerView : UIView <GLUEStyleable>
{
    SPTFreeTierTasteOnboardingArtistPickerCollectionViewLayout *_collectionViewLayout;
    UICollectionView *_collectionView;
    GLUEGradientView *_overlayGradientView;
    GLUEButton *_actionButton;
    GLUEGradientView *_backgroundGradientView;
    GLUEGradientView *_backgroundOverlayGradientView;
    UIStackView *_stackView;
    UIView *_searchBarContainerView;
    NSLayoutConstraint *_stackViewTopConstraint;
    NSLayoutConstraint *_collectionViewTopConstraint;
    NSLayoutConstraint *_collectionViewBottomConstraint;
    NSLayoutConstraint *_searchBarContainerViewHeightConstraint;
    NSLayoutConstraint *_actionButtonBottomConstraint;
    NSLayoutConstraint *_actionButtonTopConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *actionButtonTopConstraint; // @synthesize actionButtonTopConstraint=_actionButtonTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *actionButtonBottomConstraint; // @synthesize actionButtonBottomConstraint=_actionButtonBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *searchBarContainerViewHeightConstraint; // @synthesize searchBarContainerViewHeightConstraint=_searchBarContainerViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *collectionViewBottomConstraint; // @synthesize collectionViewBottomConstraint=_collectionViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *collectionViewTopConstraint; // @synthesize collectionViewTopConstraint=_collectionViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *stackViewTopConstraint; // @synthesize stackViewTopConstraint=_stackViewTopConstraint;
@property(readonly, nonatomic) UIView *searchBarContainerView; // @synthesize searchBarContainerView=_searchBarContainerView;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) GLUEGradientView *backgroundOverlayGradientView; // @synthesize backgroundOverlayGradientView=_backgroundOverlayGradientView;
@property(readonly, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(readonly, nonatomic) GLUEButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) GLUEGradientView *overlayGradientView; // @synthesize overlayGradientView=_overlayGradientView;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingArtistPickerCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)activateConstraints;
- (void)updateLayoutMarginsWithTopAnchor:(id)arg1 bottomAnchor:(id)arg2;
- (void)addSearchBar:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
