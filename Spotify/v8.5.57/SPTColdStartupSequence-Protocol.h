//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol SPTColdStartupSequence <NSObject>
@property(readonly, nonatomic) NSDictionary *metadata;
@property(readonly, nonatomic) NSDictionary *steps;
@property(readonly, nonatomic) unsigned long long terminalApplicationState;
@property(readonly, nonatomic) unsigned long long initialApplicationState;
@property(readonly, nonatomic) NSString *connectionType;
@property(readonly, nonatomic) NSString *terminalState;
@property(readonly, nonatomic) NSString *viewLoadSequenceID;
@end

