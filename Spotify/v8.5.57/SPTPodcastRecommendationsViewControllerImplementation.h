//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HUBViewComponentDelegate-Protocol.h"
#import "SPTHubViewModelProviderDelegate-Protocol.h"
#import "SPTPodcastRecommendationsViewController-Protocol.h"

@class HUBView, NSMutableSet, NSString, SPTHubViewModelProvider;
@protocol SPTHubImpressionLogger, SPTPodcastRecommendationsHubViewProvider;

@interface SPTPodcastRecommendationsViewControllerImplementation : UIViewController <SPTHubViewModelProviderDelegate, HUBViewComponentDelegate, SPTPodcastRecommendationsViewController>
{
    id <SPTPodcastRecommendationsHubViewProvider> _hubViewProvider;
    SPTHubViewModelProvider *_hubViewModelProvider;
    HUBView *_hubView;
    id <SPTHubImpressionLogger> _impressionLogger;
    NSMutableSet *_recommendationComponents;
}

@property(retain, nonatomic) NSMutableSet *recommendationComponents; // @synthesize recommendationComponents=_recommendationComponents;
@property(readonly, nonatomic) id <SPTHubImpressionLogger> impressionLogger; // @synthesize impressionLogger=_impressionLogger;
@property(retain, nonatomic) HUBView *hubView; // @synthesize hubView=_hubView;
@property(readonly, nonatomic) SPTHubViewModelProvider *hubViewModelProvider; // @synthesize hubViewModelProvider=_hubViewModelProvider;
@property(readonly, nonatomic) id <SPTPodcastRecommendationsHubViewProvider> hubViewProvider; // @synthesize hubViewProvider=_hubViewProvider;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)superScrollViewDidScroll:(id)arg1;
- (void)hubView:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)hubView:(id)arg1 componentViewWillAppear:(id)arg2;
- (void)viewModelDidLoad:(id)arg1 dataSource:(unsigned long long)arg2;
- (void)viewModelDidLoad:(id)arg1;
- (void)setupHubView;
- (id)initWithHubViewModelProvider:(id)arg1 hubViewProvider:(id)arg2 impressionLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

