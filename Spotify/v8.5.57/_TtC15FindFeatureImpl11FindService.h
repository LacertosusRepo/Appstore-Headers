//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC15FindFeatureImpl11FindService : NSObject
{
    MISSING_TYPE *containerService;
    MISSING_TYPE *remoteConfigurationService;
    MISSING_TYPE *containerUIService;
    MISSING_TYPE *browseService;
    MISSING_TYPE *glueService;
    MISSING_TYPE *searchService;
    MISSING_TYPE *voiceuiService;
    MISSING_TYPE *scannablesService;
    MISSING_TYPE *sessionService;
    MISSING_TYPE *podcastService;
    MISSING_TYPE *uriDispatchService;
    MISSING_TYPE *ubiService;
    MISSING_TYPE *performanceMetricsService;
    MISSING_TYPE *pageLoaderViewService;
    MISSING_TYPE *configurationProperties;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)provideViewControllerForURI:(id)arg1;
@property(nonatomic, readonly) _Bool composableFindEnabled;
- (void)load;
- (void)configureWithServices:(id)arg1;

@end
