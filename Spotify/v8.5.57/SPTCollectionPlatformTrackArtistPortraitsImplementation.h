//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionPlatformFieldArtistPortraits-Protocol.h"
#import "SPTCollectionPlatformFieldName-Protocol.h"
#import "SPTCollectionPlatformFieldURL-Protocol.h"

@class NSDictionary, NSString, NSURL;

@interface SPTCollectionPlatformTrackArtistPortraitsImplementation : NSObject <SPTCollectionPlatformFieldName, SPTCollectionPlatformFieldURL, SPTCollectionPlatformFieldArtistPortraits>
{
    NSString *_name;
    NSURL *_URL;
    NSDictionary *_artistPortraits;
}

@property(copy, nonatomic) NSDictionary *artistPortraits; // @synthesize artistPortraits=_artistPortraits;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

