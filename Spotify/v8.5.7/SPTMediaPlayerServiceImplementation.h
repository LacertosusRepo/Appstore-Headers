//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTMediaPlayerService-Protocol.h"

@class NSString, SPTAllocationContext, SPTMediaPlayerContentBridgeImplementation;

@interface SPTMediaPlayerServiceImplementation : NSObject <SPTMediaPlayerService>
{
    SPTMediaPlayerContentBridgeImplementation *_bridge;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTMediaPlayerContentBridgeImplementation *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (id)provideContentBridge;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
