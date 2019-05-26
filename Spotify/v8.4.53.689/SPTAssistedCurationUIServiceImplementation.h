//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTUIPageService.h"

#import "SPTAssistedCurationLinkDispatcherPageProvider.h"
#import "SPTAssistedCurationUIService.h"

@class NSString, SPTAllocationContext, SPTAssistedCurationLinkDispatcherImplementation, SPTAssistedCurationPresentationHelper;

@interface SPTAssistedCurationUIServiceImplementation : SPTUIPageService <SPTAssistedCurationLinkDispatcherPageProvider, SPTAssistedCurationUIService>
{
    id <SPTGLUEService> _glueService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTAssistedCurationService> _assistedCurationService;
    id <SPTSearchService> _searchService;
    id <SPTAudioPreviewService> _audioPreviewService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTFreeTierEducationService> _freeTierEducationService;
    id <SPTFreeTierPresentationService> _freeTierPresentationService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTAssistedCurationUserInterfaceFactory> _userInterfaceFactory;
    SPTAssistedCurationLinkDispatcherImplementation *_linkDispatcher;
    SPTAssistedCurationPresentationHelper *_assistedCurationPresentationHelper;
    id <SPTFreeTierService> _freeTierService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(retain, nonatomic) SPTAssistedCurationPresentationHelper *assistedCurationPresentationHelper; // @synthesize assistedCurationPresentationHelper=_assistedCurationPresentationHelper;
@property(retain, nonatomic) SPTAssistedCurationLinkDispatcherImplementation *linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTAssistedCurationUserInterfaceFactory> userInterfaceFactory; // @synthesize userInterfaceFactory=_userInterfaceFactory;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTFreeTierPresentationService> freeTierPresentationService; // @synthesize freeTierPresentationService=_freeTierPresentationService;
@property(nonatomic) __weak id <SPTFreeTierEducationService> freeTierEducationService; // @synthesize freeTierEducationService=_freeTierEducationService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTAudioPreviewService> audioPreviewService; // @synthesize audioPreviewService=_audioPreviewService;
@property(nonatomic) __weak id <SPTSearchService> searchService; // @synthesize searchService=_searchService;
@property(nonatomic) __weak id <SPTAssistedCurationService> assistedCurationService; // @synthesize assistedCurationService=_assistedCurationService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
- (void).cxx_destruct;
- (id)provideAddSongsActionTaskForURL:(id)arg1 logContext:(id)arg2;
- (id)provideLoggerForURI:(id)arg1 playlistURI:(id)arg2;
- (id)provideInterfaceFactoryWithViewModel:(id)arg1;
- (id)provideGLUEImageLoader;
- (id)provideEducationSnackBarPresenter;
- (id)provideSearchDrillDownViewControllerForURL:(id)arg1 context:(id)arg2;
- (id)provideAssistedCurationViewControllerForPlaylistURI:(id)arg1;
- (id)provideViewControllerForURI:(id)arg1 context:(id)arg2;
- (id)providerCardsSortMechanism;
- (id)provideAssistedCurationPresentationHelper;
- (id)providerAssistedCurationLinkDispatcher;
- (void)configureMasterFeatureFlag:(id)arg1;
- (_Bool)claimsURI:(id)arg1;
- (void)curatePlaylistURL:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
