//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchLogger-Protocol.h"

@class NSString;
@protocol SPTLogCenter, SPTSearch2DateProviding, SPTUBILogger;

@interface SPTSearchLoggerImplementation : NSObject <SPTSearchLogger>
{
    id <SPTLogCenter> _logCenter;
    id <SPTSearch2DateProviding> _dateProvider;
    id <SPTUBILogger> _ubiLogger;
}

@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTSearch2DateProviding> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logUIInteractionLaunchVoiceSearchViewWithSourceIdentifier:(id)arg1;
- (void)logUIInteractionForClearCurrentSearchStringWithRequestID:(id)arg1;
- (id)initWithLogCenter:(id)arg1 dateProvider:(id)arg2 ubiLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

