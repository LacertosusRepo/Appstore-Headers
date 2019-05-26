//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTInstrumentationInteractionMediatorColleague-Protocol.h"
#import "SPTPageController-Protocol.h"

@class NSString, NSURL, SPTFreeTierTasteOnboardingArtistSearchView, SPTFreeTierTasteOnboardingArtistSearchViewModel;
@protocol SPTPageContainer;

@interface SPTFreeTierTasteOnboardingArtistSearchViewController : UIViewController <SPTInstrumentationInteractionMediatorColleague, SPTPageController>
{
    SPTFreeTierTasteOnboardingArtistSearchViewModel *_viewModel;
}

@property(readonly, nonatomic) SPTFreeTierTasteOnboardingArtistSearchViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)mediator:(id)arg1 requiresDataForBuilder:(id)arg2 forInteractionInformation:(id)arg3;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingArtistSearchView *view; // @dynamic view;

@end

