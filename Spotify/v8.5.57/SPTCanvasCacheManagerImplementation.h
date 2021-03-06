//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCanvasCacheManager-Protocol.h"

@class NSString;
@protocol CosmosFeature;

@interface SPTCanvasCacheManagerImplementation : NSObject <SPTCanvasCacheManager>
{
    id <CosmosFeature> _cosmosFeature;
}

@property(readonly, nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
- (void).cxx_destruct;
- (void)clearCache:(CDUnknownBlockType)arg1;
- (id)initWithCosmosFeature:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

