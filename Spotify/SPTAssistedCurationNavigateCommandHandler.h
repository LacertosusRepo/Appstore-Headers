//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBCommandHandler.h"

@class NSURL;

@interface SPTAssistedCurationNavigateCommandHandler : NSObject <EXP_HUBCommandHandler>
{
    NSURL *_playlistURI;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) NSURL *playlistURI; // @synthesize playlistURI=_playlistURI;
- (void).cxx_destruct;
- (_Bool)navigateWithCommand:(id)arg1 event:(id)arg2;
- (_Bool)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithPlaylistURI:(id)arg1 linkDispatcher:(id)arg2;

@end
