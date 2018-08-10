//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, SPTDataLoader;

@interface SPTRadioLogger : NSObject
{
    NSString *_featureId;
    SPTDataLoader *_dataLoader;
    id <SPTLogCenter> _logCenter;
    NSMutableDictionary *_loggedItems;
}

@property(retain, nonatomic) NSMutableDictionary *loggedItems; // @synthesize loggedItems=_loggedItems;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) NSString *featureId; // @synthesize featureId=_featureId;
- (void).cxx_destruct;
- (void)addItemToLoggedItemsForKey:(id)arg1;
- (_Bool)impressionIsNotLoggedForKey:(id)arg1;
- (id)createImpressionKeyWithBlockIndex:(id)arg1 itemIndex:(id)arg2 impressionType:(id)arg3;
- (void)logInfinitePlaybackInteractionIntent:(id)arg1 stationURI:(id)arg2 contextURI:(id)arg3 playbackId:(id)arg4;
- (void)logInfinitePlaybackImpressionType:(id)arg1 stationURI:(id)arg2 contextURI:(id)arg3 playbackId:(id)arg4;
- (void)logSearchAndCreateStationPageFromPageIdentifier:(id)arg1 fromElement:(id)arg2;
- (void)logCreateRadioStationFromSearchWithTargetURI:(id)arg1 fromElement:(id)arg2;
- (void)logUserInteractionMessageWithStationId:(id)arg1 pageIdentifier:(id)arg2 sectionId:(id)arg3 blockIndex:(long long)arg4 itemIndex:(long long)arg5 targetURI:(id)arg6 interactionType:(id)arg7 userIntent:(id)arg8;
- (void)logUserImpressionMessageWithStationId:(id)arg1 pageIdentifier:(id)arg2 sectionId:(id)arg3 blockIndex:(unsigned long long)arg4 itemIndex:(unsigned long long)arg5 targetURI:(id)arg6 impressionType:(id)arg7 renderType:(id)arg8;
- (void)logImpressionWithStationId:(id)arg1 pageIdentifier:(id)arg2 sectionId:(id)arg3 blockIndex:(long long)arg4 itemIndex:(long long)arg5 targetUri:(id)arg6 impressionType:(id)arg7 renderType:(id)arg8;
- (void)logPageImpressionWithStationId:(id)arg1 itemIndex:(unsigned long long)arg2;
- (void)logPageImpressionWithStationId:(id)arg1;
- (id)initWithFeatureId:(id)arg1 logCenter:(id)arg2;

@end

