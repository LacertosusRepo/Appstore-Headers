//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderConsumptionObserver-Protocol.h"

@class NSString, SPTDataLoaderService;
@protocol SPTEventSender;

@interface SPTVideoCDNLogger : NSObject <SPTDataLoaderConsumptionObserver>
{
    id <SPTEventSender> _eventSender;
    SPTDataLoaderService *_dataLoaderService;
    unsigned long long _videoCDNSampling;
}

@property(nonatomic) unsigned long long videoCDNSampling; // @synthesize videoCDNSampling=_videoCDNSampling;
@property(retain, nonatomic) SPTDataLoaderService *dataLoaderService; // @synthesize dataLoaderService=_dataLoaderService;
@property(retain, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
- (void).cxx_destruct;
- (void)endedRequestWithResponse:(id)arg1 bytesDownloaded:(int)arg2 bytesUploaded:(int)arg3;
- (_Bool)shouldLogRequest:(id)arg1;
- (void)dealloc;
- (id)initWithEventSender:(id)arg1 dataLoaderService:(id)arg2 videoCDNSampling:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

