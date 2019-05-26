//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchViewModelPatching-Protocol.h"

@class NSString, NSURL;
@protocol SPTSearch2EmptyStatePropertiesProvider;

@interface SPTSearchAssistedCurationPatcher : NSObject <SPTSearchViewModelPatching>
{
    id <SPTSearch2EmptyStatePropertiesProvider> _emptyStatePropertiesProvider;
    NSString *_featureID;
    NSURL *_pageURI;
}

@property(readonly, copy, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, copy, nonatomic) NSString *featureID; // @synthesize featureID=_featureID;
@property(readonly, nonatomic) id <SPTSearch2EmptyStatePropertiesProvider> emptyStatePropertiesProvider; // @synthesize emptyStatePropertiesProvider=_emptyStatePropertiesProvider;
- (void).cxx_destruct;
- (void)replaceRowComponentInModelBuilders:(id)arg1;
- (id)uriByAddingAssistedCurationEntityPrefixToURI:(id)arg1;
- (void)addEntityDrillDownCommandModelInBodyComponentModelBuilder:(id)arg1;
- (id)uriByAddingAssistedCurationPrefixToURI:(id)arg1;
- (void)addDrillDownNavigationCommandModelsInComponentModelBuilders:(id)arg1;
- (void)addTrackRowCommandModelInComponentModelBuilders:(id)arg1;
- (void)addEventsToViewModelBuilder:(id)arg1;
- (void)patchViewModelBuilder:(id)arg1;
- (id)initWithEmptyStatePropertiesProvider:(id)arg1 featureID:(id)arg2 pageURI:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
