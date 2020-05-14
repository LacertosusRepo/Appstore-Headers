//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLoginTraitChangingView.h"

#import "SPTLoginViewWithActionButtonsConfigurable-Protocol.h"

@class GLUELabel, NSLayoutConstraint, NSString, UIStackView, UIView;
@protocol SPTLoginViewWithActionButtonsDelegate;

@interface SPTLoginIntentLedStartView : SPTLoginTraitChangingView <SPTLoginViewWithActionButtonsConfigurable>
{
    UIStackView *_buttonsContainerView;
    id <SPTLoginViewWithActionButtonsDelegate> delegate;
    GLUELabel *_buttonsHeading;
    UIView *_mainContainer;
    NSLayoutConstraint *_mainContainerCompactWidth;
    NSLayoutConstraint *_mainContainerRegularWidth;
}

@property(retain, nonatomic) NSLayoutConstraint *mainContainerRegularWidth; // @synthesize mainContainerRegularWidth=_mainContainerRegularWidth;
@property(retain, nonatomic) NSLayoutConstraint *mainContainerCompactWidth; // @synthesize mainContainerCompactWidth=_mainContainerCompactWidth;
@property(readonly, nonatomic) UIView *mainContainer; // @synthesize mainContainer=_mainContainer;
@property(readonly, nonatomic) GLUELabel *buttonsHeading; // @synthesize buttonsHeading=_buttonsHeading;
@property(nonatomic) __weak id <SPTLoginViewWithActionButtonsDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) UIStackView *buttonsContainerView; // @synthesize buttonsContainerView=_buttonsContainerView;
- (void).cxx_destruct;
- (void)actionButtonTapped:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraintsWithStyle:(id)arg1;
- (id)initWithStyle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

