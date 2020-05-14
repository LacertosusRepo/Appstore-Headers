//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol SPTLogCenter, SPTUBILogger;

@interface SPTFreeTierEntityFeedbackLogger : NSObject
{
    NSString *_featureIdentifier;
    NSURL *_pageURI;
    id <SPTLogCenter> _logCenter;
    id <SPTUBILogger> _ubiLogger;
}

@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, copy, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (void).cxx_destruct;
- (void)logInteractionWithIntent:(id)arg1 entityURI:(id)arg2 action:(id)arg3;
- (void)logUnbanForEntityURI:(id)arg1;
- (void)logUnlikeForEntityURI:(id)arg1;
- (void)logLikeForEntityURI:(id)arg1;
- (id)initWithFeatureIdentifier:(id)arg1 pageURI:(id)arg2 logCenter:(id)arg3 ubiLogger:(id)arg4;
- (id)initWithFeatureIdentifier:(id)arg1 pageURI:(id)arg2 logCenter:(id)arg3;

@end

