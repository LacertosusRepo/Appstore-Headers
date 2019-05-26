//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConcertsEntityResolverDelegate-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"

@class NSArray, NSString, NSURL, SPTConcertsDateFormatter, SPTConcertsEntity, SPTConcertsEntityHeaderViewModel, SPTConcertsEntityState, SPTConcertsInfoViewModel, SPTConcertsLogger, SPTObserverManager;
@protocol GLUEImageLoader, GLUETheme, SPTConcertsEntityResolver, SPTConcertsResolverToken, SPTLinkDispatcher, SPTOfflineModeState;

@interface SPTConcertsEntityViewModel : NSObject <SPTConcertsEntityResolverDelegate, SPTOfflineModeStateObserver>
{
    SPTConcertsLogger *_logger;
    SPTConcertsEntityHeaderViewModel *_headerViewModel;
    SPTConcertsInfoViewModel *_infoViewModel;
    long long _viewState;
    NSURL *_URI;
    id <SPTConcertsEntityResolver> _entityResolver;
    id <SPTConcertsResolverToken> _entityResolverToken;
    SPTConcertsEntityState *_state;
    id <GLUETheme> _theme;
    id <GLUEImageLoader> _glueImageLoader;
    NSArray *_sectionViewModels;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTObserverManager *_observerManager;
    id <SPTOfflineModeState> _offlineModeState;
    SPTConcertsDateFormatter *_dateFormatterProvider;
}

@property(readonly, nonatomic) SPTConcertsDateFormatter *dateFormatterProvider; // @synthesize dateFormatterProvider=_dateFormatterProvider;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(copy, nonatomic) NSArray *sectionViewModels; // @synthesize sectionViewModels=_sectionViewModels;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(copy, nonatomic) SPTConcertsEntityState *state; // @synthesize state=_state;
@property(retain, nonatomic) id <SPTConcertsResolverToken> entityResolverToken; // @synthesize entityResolverToken=_entityResolverToken;
@property(readonly, nonatomic) id <SPTConcertsEntityResolver> entityResolver; // @synthesize entityResolver=_entityResolver;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
@property(readonly, nonatomic) SPTConcertsInfoViewModel *infoViewModel; // @synthesize infoViewModel=_infoViewModel;
@property(readonly, nonatomic) SPTConcertsEntityHeaderViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(readonly, nonatomic) SPTConcertsLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (id)provideMonthlyListenersFormatter;
- (id)sectionViewModelsForEntity:(id)arg1;
- (void)entityResolver:(id)arg1 didEncounterError:(id)arg2 forToken:(id)arg3;
- (void)entityResolver:(id)arg1 didCancelForToken:(id)arg2;
- (void)entityResolver:(id)arg1 didResolveEntity:(id)arg2 forToken:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)cancelEntityLoad;
- (void)cancelAllLoads;
- (_Bool)shouldReloadGivenError:(id)arg1;
- (_Bool)shouldLoad;
- (void)loadIfNeeded;
- (void)updateViewState;
- (void)updateLoadingIndication;
- (id)rowViewModelForIndexPath:(id)arg1;
- (id)viewModelForSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
@property(readonly, nonatomic) long long sections;
@property(readonly, nonatomic) NSURL *pageURI;
@property(readonly, nonatomic, getter=hasTopAlbums) _Bool topAlbums;
@property(readonly, copy, nonatomic) SPTConcertsEntity *entity;
- (void)dealloc;
- (id)initWithURI:(id)arg1 dateFormatterProvider:(id)arg2 entityResolver:(id)arg3 imageLoader:(id)arg4 linkDispatcher:(id)arg5 theme:(id)arg6 glueImageLoader:(id)arg7 offlineModeState:(id)arg8 concertsLogger:(id)arg9 containerUIService:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
