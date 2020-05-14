//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTPartnerIntegrationSettingsViewModelDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, NSURL, SPTPartnerIntegrationSettingsViewModel, UICollectionView;
@protocol SPTAlertInterface, SPTPageContainer;

@interface SPTPartnerIntegrationSettingsViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, SPTPartnerIntegrationSettingsViewModelDelegate, SPTPageController, SPContentInsetViewController>
{
    UICollectionView *_collectionView;
    SPTPartnerIntegrationSettingsViewModel *_viewModel;
    id <SPTAlertInterface> _alertInterface;
}

@property(readonly, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(readonly, nonatomic) SPTPartnerIntegrationSettingsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)sp_updateContentInsets;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)settingsViewModel:(id)arg1 didEncounterError:(id)arg2;
- (void)settingsViewModelDidReload:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupConstraints;
- (void)setupViews;
- (void)viewDidLoad;
- (id)initWithIntegrationSettingsViewModel:(id)arg1 alertInterface:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

