//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlaylistPlatformDataLoaderRequestToken.h"

@class NSString;

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
