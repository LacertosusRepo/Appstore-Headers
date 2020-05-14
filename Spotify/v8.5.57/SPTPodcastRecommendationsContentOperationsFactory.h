//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTPodcastRecommendationsSectionTitleContentOperation;
@protocol SPTHubContentOperationFactory, SPTHubRemoteContentOperationURLResolver;

@interface SPTPodcastRecommendationsContentOperationsFactory : NSObject
{
    id <SPTHubContentOperationFactory> _hubContentOperationFactory;
    id <SPTHubRemoteContentOperationURLResolver> _URLResolver;
    SPTPodcastRecommendationsSectionTitleContentOperation *_titleContentOperation;
}

@property(readonly, nonatomic) SPTPodcastRecommendationsSectionTitleContentOperation *titleContentOperation; // @synthesize titleContentOperation=_titleContentOperation;
@property(readonly, nonatomic) id <SPTHubRemoteContentOperationURLResolver> URLResolver; // @synthesize URLResolver=_URLResolver;
@property(readonly, nonatomic) id <SPTHubContentOperationFactory> hubContentOperationFactory; // @synthesize hubContentOperationFactory=_hubContentOperationFactory;
- (void).cxx_destruct;
- (id)createContentOperationsForReferrerIdentifier:(id)arg1;
- (id)initWithHubContentOperationFactory:(id)arg1 URLResolver:(id)arg2 titleContentOperation:(id)arg3;

@end
