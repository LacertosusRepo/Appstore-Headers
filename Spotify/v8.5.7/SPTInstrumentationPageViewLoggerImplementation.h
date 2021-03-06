//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInstrumentationPageViewLogger-Protocol.h"

@class NSString, SPTInstrumentationPageViewData;
@protocol SPTInstrumentationTransport;

@interface SPTInstrumentationPageViewLoggerImplementation : NSObject <SPTInstrumentationPageViewLogger>
{
    id <SPTInstrumentationTransport> _transport;
    SPTInstrumentationPageViewData *_currentData;
}

@property(retain, nonatomic) SPTInstrumentationPageViewData *currentData; // @synthesize currentData=_currentData;
@property(retain, nonatomic) id <SPTInstrumentationTransport> transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (void)sendPageViewExitForCurrentDataWithTimestamp:(long long)arg1;
- (void)exitCurrentPageWithTimestamp:(long long)arg1;
- (void)sendPageViewEnterWithPageIdentifier:(id)arg1 URI:(id)arg2 timestamp:(long long)arg3 navigationRootIdentifier:(id)arg4;
- (void)enterPageWithIdentifier:(id)arg1 URI:(id)arg2 timestamp:(long long)arg3 navigationRootIdentifier:(id)arg4;
- (id)initWithTransport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

