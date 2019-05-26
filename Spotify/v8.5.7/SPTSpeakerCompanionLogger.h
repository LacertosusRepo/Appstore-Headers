//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTLogCenter;

@interface SPTSpeakerCompanionLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    NSString *_referrerIdentifier;
}

@property(copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logUIInteractionWithRequestId:(id)arg1 pageURI:(id)arg2 targetURI:(id)arg3 sectionId:(id)arg4 itemIndex:(long long)arg5 interactionType:(id)arg6 userIntent:(id)arg7 action:(id)arg8;
- (void)logUIInteractionWithRequestId:(id)arg1 pageURI:(id)arg2 targetURI:(id)arg3 sectionId:(id)arg4 interactionType:(id)arg5 userIntent:(id)arg6 action:(id)arg7;
- (void)logUIImpressionWithRequestId:(id)arg1 pageURI:(id)arg2 sectionId:(id)arg3 targetURI:(id)arg4 impressionType:(id)arg5;
- (id)initWithLogCenter:(id)arg1 referrerIdentifier:(id)arg2;

@end

