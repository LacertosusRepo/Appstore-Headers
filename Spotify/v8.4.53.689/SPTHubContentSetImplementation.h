//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCeramicSpaceWithRequestId.h"
#import "SPTHubContentSet.h"

@class NSArray, NSDictionary, NSString, SPTHubInstrumentationData, SPTHubViewHeaderData;

@interface SPTHubContentSetImplementation : NSObject <SPTCeramicSpaceWithRequestId, SPTHubContentSet>
{
    _Bool _containsRemoteContent;
    NSString *_extensionEndpointPath;
    SPTHubViewHeaderData *_headerData;
    NSArray *_tabItems;
    unsigned long long _selectedTabItemIndex;
    NSArray *_blocks;
    NSDictionary *_metadata;
    SPTHubInstrumentationData *_instrumentationData;
}

@property(readonly, nonatomic) SPTHubInstrumentationData *instrumentationData; // @synthesize instrumentationData=_instrumentationData;
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) _Bool containsRemoteContent; // @synthesize containsRemoteContent=_containsRemoteContent;
@property(readonly, nonatomic) NSArray *blocks; // @synthesize blocks=_blocks;
@property(readonly, nonatomic) unsigned long long selectedTabItemIndex; // @synthesize selectedTabItemIndex=_selectedTabItemIndex;
@property(readonly, nonatomic) NSArray *tabItems; // @synthesize tabItems=_tabItems;
@property(readonly, nonatomic) SPTHubViewHeaderData *headerData; // @synthesize headerData=_headerData;
@property(readonly, copy, nonatomic) NSString *extensionEndpointPath; // @synthesize extensionEndpointPath=_extensionEndpointPath;
- (void).cxx_destruct;
- (id)blockAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfBlocks;
- (id)initWithHeaderData:(id)arg1 tabItems:(id)arg2 selectedTabItemIndex:(unsigned long long)arg3 blocks:(id)arg4 allBlocksAreLocal:(_Bool)arg5 metadata:(id)arg6 instrumentationData:(id)arg7 extensionEndpointPath:(id)arg8;
- (id)requestIdForBlockAtIndex:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSString *title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

