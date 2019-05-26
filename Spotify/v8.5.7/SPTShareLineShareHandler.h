//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShareHandler-Protocol.h"

@class NSString, SPTShareLogger;
@protocol SPTShareDeeplinkHandler;

@interface SPTShareLineShareHandler : NSObject <SPTShareHandler>
{
    SPTShareLogger *_shareLogger;
    id <SPTShareDeeplinkHandler> _deeplinkHandler;
}

@property(retain, nonatomic) id <SPTShareDeeplinkHandler> deeplinkHandler; // @synthesize deeplinkHandler=_deeplinkHandler;
@property(retain, nonatomic) SPTShareLogger *shareLogger; // @synthesize shareLogger=_shareLogger;
- (void).cxx_destruct;
- (void)shareWithData:(id)arg1 shareDestination:(id)arg2 sharePresenter:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithLogger:(id)arg1 deeplinkHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

