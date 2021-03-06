//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_SPTHubViewModelProvider.h"

#import "EXP_HUBViewModelLoaderDelegate-Protocol.h"
#import "SPTFreeTierHomeViewModel-Protocol.h"

@class NSString;
@protocol EXP_HUBViewModelLoader, EXP_SPTHubViewModelProviderDelegate, SPTFreeTierHomeViewModelDelegate, SPTFreeTierHomeViewModelProviderDelegate;

@interface SPTFreeTierHomeViewModelProvider : EXP_SPTHubViewModelProvider <EXP_HUBViewModelLoaderDelegate, SPTFreeTierHomeViewModel>
{
    _Bool _didLoadCachedViewModel;
    _Bool _skipped;
    id <EXP_SPTHubViewModelProviderDelegate> delegate;
    id <SPTFreeTierHomeViewModelDelegate> viewModelDelegate;
    id <SPTFreeTierHomeViewModelProviderDelegate> _homeViewModelProviderDelegate;
    id <EXP_HUBViewModelLoader> _cachedViewModelLoader;
    id <EXP_HUBViewModelLoader> _remoteViewModelLoader;
}

@property(nonatomic, getter=didSkipOnboarding) _Bool skipped; // @synthesize skipped=_skipped;
@property(nonatomic) _Bool didLoadCachedViewModel; // @synthesize didLoadCachedViewModel=_didLoadCachedViewModel;
@property(readonly, nonatomic) id <EXP_HUBViewModelLoader> remoteViewModelLoader; // @synthesize remoteViewModelLoader=_remoteViewModelLoader;
@property(readonly, nonatomic) id <EXP_HUBViewModelLoader> cachedViewModelLoader; // @synthesize cachedViewModelLoader=_cachedViewModelLoader;
@property(nonatomic) __weak id <SPTFreeTierHomeViewModelProviderDelegate> homeViewModelProviderDelegate; // @synthesize homeViewModelProviderDelegate=_homeViewModelProviderDelegate;
@property(nonatomic) __weak id <SPTFreeTierHomeViewModelDelegate> viewModelDelegate; // @synthesize viewModelDelegate;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewModelLoader:(id)arg1 didFailLoadingWithError:(id)arg2;
- (void)viewModelLoader:(id)arg1 didLoadViewModel:(id)arg2;
- (void)removeWelComeHeaderIfRecentlyPlayedIsInModel:(id)arg1;
- (void)didSkipTasteOnboarding;
- (void)loadViewModel;
- (id)initWithCachedViewModelLoader:(id)arg1 remoteViewModelLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

