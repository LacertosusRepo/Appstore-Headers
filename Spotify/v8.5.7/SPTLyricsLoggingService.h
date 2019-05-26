//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTLogCenter;

@interface SPTLyricsLoggingService : NSObject
{
    _Bool _backgrounded;
    NSString *_featureId;
    id <SPTLogCenter> _logCenter;
}

@property(nonatomic, getter=isBackgrounded) _Bool backgrounded; // @synthesize backgrounded=_backgrounded;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, copy, nonatomic) NSString *featureId; // @synthesize featureId=_featureId;
- (void).cxx_destruct;
- (void)registerForBackgroundNotifications;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)logUserInteraction5MessageWithTrackURI:(id)arg1 pageIdentifier:(id)arg2 sectionId:(id)arg3 itemIndex:(long long)arg4 targetURI:(id)arg5 interactionType:(id)arg6 userIntent:(id)arg7;
- (void)logUserImpression5MessageWithTrackURI:(id)arg1 pageIdentifier:(id)arg2 sectionId:(id)arg3 itemIndex:(long long)arg4 targetURI:(id)arg5 impressionType:(id)arg6 renderType:(id)arg7;
- (void)logUserInteractionMessageWithTrackURI:(id)arg1 pageIdentifier:(id)arg2 sectionId:(id)arg3 blockIndex:(long long)arg4 itemIndex:(long long)arg5 targetURI:(id)arg6 interactionType:(id)arg7 userIntent:(id)arg8;
- (void)logUserImpressionMessageWithTrackURI:(id)arg1 pageIdentifier:(id)arg2 sectionId:(id)arg3 blockIndex:(unsigned long long)arg4 itemIndex:(unsigned long long)arg5 targetURI:(id)arg6 impressionType:(id)arg7 renderType:(id)arg8;
- (void)logImpressionWithTrackURI:(id)arg1 pageIdentifier:(id)arg2 sectionId:(id)arg3 blockIndex:(long long)arg4 itemIndex:(long long)arg5 targetUri:(id)arg6 impressionType:(id)arg7 renderType:(id)arg8;
- (void)logBlockImpressionWithTrackURI:(id)arg1 sectionID:(id)arg2 blockIndex:(unsigned long long)arg3 renderType:(id)arg4;
- (void)logSectionImpressionWithTrackURI:(id)arg1 sectionID:(id)arg2;
- (void)logPageImpressionWithTrackURI:(id)arg1;
- (id)initWithFeatureId:(id)arg1 logCenter:(id)arg2;

@end

