//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTPlaylistPlatformPlaylistTracksFetchOptions.h"

@class NSDictionary, SPTPlayOrigin;

@interface SPTPlaylistPlatformPlayOptions : SPTPlaylistPlatformPlaylistTracksFetchOptions
{
    _Bool _shouldLoadInterruptions;
    SPTPlayOrigin *_origin;
    NSDictionary *_contextMetadata;
}

@property(nonatomic) _Bool shouldLoadInterruptions; // @synthesize shouldLoadInterruptions=_shouldLoadInterruptions;
@property(copy, nonatomic) NSDictionary *contextMetadata; // @synthesize contextMetadata=_contextMetadata;
@property(copy, nonatomic) SPTPlayOrigin *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

