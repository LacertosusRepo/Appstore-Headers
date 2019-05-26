//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPAction.h"

@class NSURL;
@protocol SPTAssistedCurationUIService;

@interface SPTAssistedCurationAddSongsAction : SPAction
{
    NSURL *_playlistURL;
    id <SPTAssistedCurationUIService> _assistedCurationUIService;
}

@property(nonatomic) __weak id <SPTAssistedCurationUIService> assistedCurationUIService; // @synthesize assistedCurationUIService=_assistedCurationUIService;
@property(retain, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (long long)style;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithPlaylistURL:(id)arg1 assistedCurationUIService:(id)arg2 logContext:(id)arg3;

@end
