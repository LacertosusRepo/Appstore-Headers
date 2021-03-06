//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"
#import "SPTURISubtypeHandler-Protocol.h"

@class NSString;
@protocol SPTMetaViewController, SPTPlayer;

@interface SPTLiveVideoSubtypeHandler : NSObject <SPTPlayerObserver, SPTURISubtypeHandler>
{
    id <SPTPlayer> _player;
    id <SPTMetaViewController> _metaViewController;
}

@property(nonatomic) __weak id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (long long)URISubtypeHandlerOpenURI:(id)arg1 context:(id)arg2;
- (_Bool)URISubtypeHandlerCanHandleURI:(id)arg1;
- (id)initWithPlayer:(id)arg1 metaViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

