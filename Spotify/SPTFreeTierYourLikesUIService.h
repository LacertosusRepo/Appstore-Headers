//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTUIPageService.h"

@interface SPTFreeTierYourLikesUIService : SPTUIPageService
{
    id <SPTAudioPreviewService> _audioPreviewService;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTGLUEService> _glueService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTFreeTierYourLikesService> _yourLikesService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTFreeTierYourLikesService> yourLikesService; // @synthesize yourLikesService=_yourLikesService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(nonatomic) __weak id <SPTAudioPreviewService> audioPreviewService; // @synthesize audioPreviewService=_audioPreviewService;
- (void).cxx_destruct;
- (void)configureMasterFeatureFlag:(id)arg1;
- (id)provideViewControllerForURI:(id)arg1 context:(id)arg2;
- (_Bool)claimsURI:(id)arg1;
- (void)configureWithServices:(id)arg1;

@end
