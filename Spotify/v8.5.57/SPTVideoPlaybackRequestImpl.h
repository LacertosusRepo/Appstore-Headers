//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMPlaybackRequest-Protocol.h"

@class NSDictionary, NSString, NSURL;

@interface SPTVideoPlaybackRequestImpl : NSObject <BMPlaybackRequest>
{
    _Bool _royaltyMedia;
    _Bool _audioOnlyAllowed;
    NSURL *_mediaURL;
    NSDictionary *_metadata;
}

@property(nonatomic, getter=isAudioOnlyAllowed) _Bool audioOnlyAllowed; // @synthesize audioOnlyAllowed=_audioOnlyAllowed;
@property(nonatomic, getter=isRoyaltyMedia) _Bool royaltyMedia; // @synthesize royaltyMedia=_royaltyMedia;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaURL:(id)arg1 metadata:(id)arg2 royaltyMedia:(_Bool)arg3 audioOnlyAllowed:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

