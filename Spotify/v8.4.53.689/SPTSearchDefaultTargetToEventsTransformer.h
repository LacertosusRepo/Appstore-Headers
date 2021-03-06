//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSearchTargetToEventsTransforming.h"

@class NSString;

@interface SPTSearchDefaultTargetToEventsTransformer : NSObject <SPTSearchTargetToEventsTransforming>
{
    _Bool _nftExperience;
}

@property(readonly, nonatomic) _Bool nftExperience; // @synthesize nftExperience=_nftExperience;
- (void)replaceEntityCardWithHugs2CardInComponentModelBuilder:(id)arg1;
- (void)replaceEntityRowWithImageRowInComponentModelBuilder:(id)arg1;
- (void)replaceEntityRowWithTrackRowInComponentModelBuilder:(id)arg1;
- (void)replaceEntityRowWithHugs2RowsInComponentModelBuilder:(id)arg1;
- (void)replaceVideoRowWithHugs2VideoRowInComponentModelBuilder:(id)arg1;
- (void)recursivelyReplaceHugsComponentsFromModelBuilders:(id)arg1;
- (void)replaceHugsComponentsWithHugs2InViewModelBuilder:(id)arg1;
- (void)addShouldUseTrackURIForRecentsKeyInComponentModelBuilders:(id)arg1;
- (void)addContextMenuCommandModelsInComponentModelBuilders:(id)arg1 withViewURI:(id)arg2;
- (void)addQueryToTracksCommandData:(id)arg1 forQuery:(id)arg2;
- (void)addTapEventCommandModelsToComponentModelBuilders:(id)arg1;
- (void)applyTransformationToViewModelBuilder:(id)arg1;
- (id)initForNFTExperience:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

