//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBCommandHandler-Protocol.h"

@protocol EXP_SPTHubInteractionLogger, SPTLinkDispatcher;

@interface SPTFreeTierTrackAddToPlaylistCommandHandler : NSObject <EXP_HUBCommandHandler>
{
    id <SPTLinkDispatcher> _linkDispatcher;
    id <EXP_SPTHubInteractionLogger> _logger;
}

@property(readonly, nonatomic) id <EXP_SPTHubInteractionLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithLinkDispatcher:(id)arg1 logger:(id)arg2;

@end
