//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_SPTHubViewModelProvider.h"

#import "EXP_HUBViewModelLoaderDelegate-Protocol.h"

@protocol EXP_HUBViewModelLoader, SPTHomeFeatureViewModelProviderDelegate;

@interface SPTHomeFeatureViewModelProvider : EXP_SPTHubViewModelProvider <EXP_HUBViewModelLoaderDelegate>
{
    _Bool _didLoadCachedViewModel;
    id <SPTHomeFeatureViewModelProviderDelegate> _homeViewModelProviderDelegate;
    id <EXP_HUBViewModelLoader> _cachedViewModelLoader;
    id <EXP_HUBViewModelLoader> _remoteViewModelLoader;
}

@property(nonatomic) _Bool didLoadCachedViewModel; // @synthesize didLoadCachedViewModel=_didLoadCachedViewModel;
@property(readonly, nonatomic) id <EXP_HUBViewModelLoader> remoteViewModelLoader; // @synthesize remoteViewModelLoader=_remoteViewModelLoader;
@property(readonly, nonatomic) id <EXP_HUBViewModelLoader> cachedViewModelLoader; // @synthesize cachedViewModelLoader=_cachedViewModelLoader;
@property(nonatomic) __weak id <SPTHomeFeatureViewModelProviderDelegate> homeViewModelProviderDelegate; // @synthesize homeViewModelProviderDelegate=_homeViewModelProviderDelegate;
- (void).cxx_destruct;
- (void)viewModelLoader:(id)arg1 didFailLoadingWithError:(id)arg2;
- (void)viewModelLoader:(id)arg1 didLoadViewModel:(id)arg2;
- (void)loadViewModel;
- (id)initWithCachedViewModelLoader:(id)arg1 remoteViewModelLoader:(id)arg2;

@end

