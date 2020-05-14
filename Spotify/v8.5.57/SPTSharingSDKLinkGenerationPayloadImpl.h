//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSharingSDKLinkGenerationPayload-Protocol.h"

@class NSSet, NSString;
@protocol SPTSharingSDKUTMTag;

@interface SPTSharingSDKLinkGenerationPayloadImpl : NSObject <SPTSharingSDKLinkGenerationPayload>
{
    NSString *_spotifyURIString;
    id <SPTSharingSDKUTMTag> _utmTag;
    NSSet *_extraQueryItems;
}

@property(readonly, nonatomic) NSSet *extraQueryItems; // @synthesize extraQueryItems=_extraQueryItems;
@property(readonly, nonatomic) id <SPTSharingSDKUTMTag> utmTag; // @synthesize utmTag=_utmTag;
@property(readonly, copy, nonatomic) NSString *spotifyURIString; // @synthesize spotifyURIString=_spotifyURIString;
- (void).cxx_destruct;
- (id)initWithSpotifyURIString:(id)arg1 utmTag:(id)arg2 extraQueryItems:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

