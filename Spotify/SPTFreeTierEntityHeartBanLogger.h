//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface SPTFreeTierEntityHeartBanLogger : NSObject
{
    NSString *_featureIdentifier;
    NSURL *_pageURI;
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, copy, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (void).cxx_destruct;
- (void)logInteractionWithIntent:(id)arg1 entityURI:(id)arg2;
- (void)logUnbanForEntityURI:(id)arg1;
- (void)logUnlikeForEntityURI:(id)arg1;
- (void)logLikeForEntityURI:(id)arg1;
- (id)initWithFeatureIdentifier:(id)arg1 pageURI:(id)arg2 logCenter:(id)arg3;

@end
