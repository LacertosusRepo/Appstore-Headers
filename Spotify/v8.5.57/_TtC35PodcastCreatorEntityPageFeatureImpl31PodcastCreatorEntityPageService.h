//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC35PodcastCreatorEntityPageFeatureImpl31PodcastCreatorEntityPageService : NSObject
{
    MISSING_TYPE *creatorPageRegistrationToken;
    MISSING_TYPE *creatorShowPageRegistrationToken;
    MISSING_TYPE *creatorLoader;
    MISSING_TYPE *containerService;
    MISSING_TYPE *remoteConfigurationService;
    MISSING_TYPE *glueService;
    MISSING_TYPE *hubsService;
    MISSING_TYPE *networkService;
    MISSING_TYPE *browseService;
    MISSING_TYPE *podcastUiService;
    MISSING_TYPE *homeUiService;
    MISSING_TYPE *pageLoaderViewService;
    MISSING_TYPE *performanceService;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)provideCreatorShowsPageViewControllerWith:(id)arg1 context:(id)arg2;
- (id)providePageLoadedViewControllerWith:(id)arg1 context:(id)arg2;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

@end
