//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTPageController.h"

@class GLUEButton, NSMutableArray, NSString, NSURL, SPTGaiaEducationDetailModel, SPTLayoutConstraintBuilder, UIImageView, UIScrollView, UIView;

@interface SPTGaiaDevicePickerEducationDetailViewController : UIViewController <SPTPageController>
{
    SPTGaiaEducationDetailModel *_educationDetailModel;
    UIScrollView *_scrollView;
    UIView *_containerView;
    UIImageView *_headerImageView;
    SPTLayoutConstraintBuilder *_builder;
    id <GLUETheme> _theme;
    NSMutableArray *_stepLabels;
    GLUEButton *_doneButton;
}

@property(retain, nonatomic) GLUEButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) NSMutableArray *stepLabels; // @synthesize stepLabels=_stepLabels;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *builder; // @synthesize builder=_builder;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) SPTGaiaEducationDetailModel *educationDetailModel; // @synthesize educationDetailModel=_educationDetailModel;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)doneButtonPressed;
- (id)createStepLabelWithDescription:(id)arg1;
- (id)createStepIdentifierLabelWithStep:(long long)arg1;
- (void)setupDoneButtonConstraints;
- (void)setupDoneButton;
- (void)setupLabels;
- (void)setupHeaderImageViewConstraints;
- (void)setupHeaderImageView;
- (void)setupContainerViewConstraints;
- (void)setupContainerView;
- (void)setupScrollViewConstraints;
- (void)setupScrollView;
- (void)viewDidLoad;
- (id)initWithEducationDetailModel:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

