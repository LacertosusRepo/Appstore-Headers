//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTMediaPlayerService.h"

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
