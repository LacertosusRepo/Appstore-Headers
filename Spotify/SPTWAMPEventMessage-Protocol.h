//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTWAMPMessage.h"

@class NSArray, NSDictionary;

@protocol SPTWAMPEventMessage <SPTWAMPMessage>
@property(readonly, nonatomic) NSDictionary *namedArguments;
@property(readonly, nonatomic) NSArray *arguments;
@property(readonly, nonatomic) NSDictionary *details;
@property(readonly, nonatomic) unsigned long long publicationID;
@property(readonly, nonatomic) unsigned long long triggeringSubscriptionID;
@end
