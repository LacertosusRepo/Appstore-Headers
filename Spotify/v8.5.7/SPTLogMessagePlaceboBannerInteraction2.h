//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessagePlaceboBannerInteraction2 : SPTLogMessage
{
    NSString *_configurationIdValue;
    NSString *_interactionTypeValue;
    NSString *_interactionUriValue;
}

+ (id)messageWithConfigurationId:(id)arg1 interactionType:(id)arg2 interactionUri:(id)arg3;
@property(copy, nonatomic) NSString *interactionUriValue; // @synthesize interactionUriValue=_interactionUriValue;
@property(copy, nonatomic) NSString *interactionTypeValue; // @synthesize interactionTypeValue=_interactionTypeValue;
@property(copy, nonatomic) NSString *configurationIdValue; // @synthesize configurationIdValue=_configurationIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

