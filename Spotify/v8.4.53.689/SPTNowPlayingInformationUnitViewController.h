//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTNowPlayingContainedViewController.h"
#import "SPTNowPlayingContainerIdleMonitorObserver.h"
#import "SPTNowPlayingInformationUnitViewModelDelegate.h"

@class NSString, SPTNowPlayingInformationUnitViewModel, SPTNowPlayingMarqueeLabel, SPTTheme, UIViewController<SPTNowPlayingContainingViewController>;

@interface SPTNowPlayingInformationUnitViewController : UIViewController <SPTNowPlayingInformationUnitViewModelDelegate, SPTNowPlayingContainerIdleMonitorObserver, SPTNowPlayingContainedViewController>
{
    SPTTheme *_theme;
    SPTNowPlayingMarqueeLabel *_titleLabel;
    SPTNowPlayingMarqueeLabel *_subtitleLabel;
    SPTNowPlayingInformationUnitViewModel *_viewModel;
}

@property(readonly, nonatomic) SPTNowPlayingInformationUnitViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTNowPlayingMarqueeLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) SPTNowPlayingMarqueeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)idlePeriodDidEnd;
- (void)idlePeriodDidBegin;
- (void)updateLabels;
- (struct CGSize)preferredContentSize;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (void)setupConstraints;
- (void)subtitleLabelTapped:(id)arg1;
- (void)titleLabelTapped:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTheme:(id)arg1 viewModel:(id)arg2;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

