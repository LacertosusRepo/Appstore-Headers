//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastRecommendationsService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol EXP_SPTHubFrameworkService, SPTGLUEService, SPTPodcastRecommendationsViewProvider, SPTSessionService;

@interface SPTPodcastRecommendationsServiceImplementation : NSObject <SPTPodcastRecommendationsService>
{
    id <SPTSessionService> _clientSessionService;
    id <EXP_SPTHubFrameworkService> _hubFrameworkService;
    id <SPTGLUEService> _glueService;
    id <SPTPodcastRecommendationsViewProvider> _recommendationsViewProvider;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPodcastRecommendationsViewProvider> recommendationsViewProvider; // @synthesize recommendationsViewProvider=_recommendationsViewProvider;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <EXP_SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)provideRecommendationsViewProvider;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

