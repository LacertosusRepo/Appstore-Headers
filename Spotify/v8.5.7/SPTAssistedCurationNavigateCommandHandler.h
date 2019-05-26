//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBCommandHandler-Protocol.h"

@class NSURL;
@protocol SPTLinkDispatcher;

@interface SPTAssistedCurationNavigateCommandHandler : NSObject <EXP_HUBCommandHandler>
{
    NSURL *_playlistURI;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) NSURL *playlistURI; // @synthesize playlistURI=_playlistURI;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithPlaylistURI:(id)arg1 linkDispatcher:(id)arg2;

@end
