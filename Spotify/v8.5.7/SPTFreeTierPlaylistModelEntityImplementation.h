//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistModelEntity-Protocol.h"

@class NSArray, NSString;
@protocol SPTFreeTierPlaylistModelEntityMetadataFields;

@interface SPTFreeTierPlaylistModelEntityImplementation : NSObject <SPTFreeTierPlaylistModelEntity>
{
    id <SPTFreeTierPlaylistModelEntityMetadataFields> _metadata;
    NSArray *_tracks;
    NSArray *_recommendations;
    unsigned long long _unrangedTracksLength;
    unsigned long long onDemandType;
}

@property(nonatomic) unsigned long long onDemandType; // @synthesize onDemandType;
@property(nonatomic) unsigned long long unrangedTracksLength; // @synthesize unrangedTracksLength=_unrangedTracksLength;
@property(copy, nonatomic) NSArray *recommendations; // @synthesize recommendations=_recommendations;
@property(copy, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(retain, nonatomic) id <SPTFreeTierPlaylistModelEntityMetadataFields> metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

