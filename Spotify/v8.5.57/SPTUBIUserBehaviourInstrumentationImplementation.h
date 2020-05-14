//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIUserBehaviourInstrumentation-Protocol.h"

@class NSString;
@protocol SPTUBILogger;

@interface SPTUBIUserBehaviourInstrumentationImplementation : NSObject <SPTUBIUserBehaviourInstrumentation>
{
    id <SPTUBILogger> _logger;
}

@property(readonly, nonatomic) id <SPTUBILogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)provideHubsInstrumentationWithPageURI:(id)arg1 pageId:(id)arg2;
- (id)provideLogger;
- (id)initWithLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
