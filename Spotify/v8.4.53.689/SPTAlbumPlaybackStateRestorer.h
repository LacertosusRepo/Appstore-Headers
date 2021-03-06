//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlayerObserver.h"

@class NSString, NSUserDefaults;

@interface SPTAlbumPlaybackStateRestorer : NSObject <SPTPlayerObserver>
{
    NSUserDefaults *_userDefaults;
}

@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (_Bool)playbackInfoExistsForAlbumWithURL:(id)arg1;
- (void)clearPlaybackPositionForAlbumWithURL:(id)arg1;
- (id)playOptionsForAlbumWithURL:(id)arg1;
- (void)storeAlbumPlaybackPositionWithURL:(id)arg1 state:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

