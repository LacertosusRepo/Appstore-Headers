//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTPlayOptions, SPTPlayOrigin;
@protocol SPTPlaylistPlatformFieldURL><SPTPlaylistPlatformFieldRowId;

@protocol SPTFreeTierPlaylistPlayModel <NSObject>
- (void)playTrackEntity:(id <SPTPlaylistPlatformFieldURL><SPTPlaylistPlatformFieldRowId>)arg1 andPlayOrigin:(SPTPlayOrigin *)arg2;
- (void)playWithPlayOptions:(SPTPlayOptions *)arg1 andPlayOrigin:(SPTPlayOrigin *)arg2;
- (void)playWithPlayOrigin:(SPTPlayOrigin *)arg1;
- (void)shufflePlayWithPlayOrigin:(SPTPlayOrigin *)arg1;
@end

