//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderConsumptionObserver.h"

@class NSString, SPTDataLoaderService, SPTVideoPreferences;

@interface SPTVideoCDNLogger : NSObject <SPTDataLoaderConsumptionObserver>
{
    id <SPTLogCenter> _logCenter;
    SPTDataLoaderService *_dataLoaderService;
    SPTVideoPreferences *_videoPreferences;
}

@property(retain, nonatomic) SPTVideoPreferences *videoPreferences; // @synthesize videoPreferences=_videoPreferences;
@property(retain, nonatomic) SPTDataLoaderService *dataLoaderService; // @synthesize dataLoaderService=_dataLoaderService;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)endedRequestWithResponse:(id)arg1 bytesDownloaded:(int)arg2 bytesUploaded:(int)arg3;
- (_Bool)shouldLogRequest:(id)arg1 sampling:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithLogCenter:(id)arg1 dataLoaderService:(id)arg2 videoPreferences:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

