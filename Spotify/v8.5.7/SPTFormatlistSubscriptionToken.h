//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistPlatformDataLoaderRequestToken-Protocol.h"

@class NSString;
@protocol SPTPlaylistPlatformDataLoaderRequestToken;

@interface SPTFormatlistSubscriptionToken : NSObject <SPTPlaylistPlatformDataLoaderRequestToken>
{
    id <SPTPlaylistPlatformDataLoaderRequestToken> _metadataToken;
    id <SPTPlaylistPlatformDataLoaderRequestToken> _tracksToken;
}

@property(readonly, nonatomic) id <SPTPlaylistPlatformDataLoaderRequestToken> tracksToken; // @synthesize tracksToken=_tracksToken;
@property(readonly, nonatomic) id <SPTPlaylistPlatformDataLoaderRequestToken> metadataToken; // @synthesize metadataToken=_metadataToken;
- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithMetadataToken:(id)arg1 tracksToken:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

