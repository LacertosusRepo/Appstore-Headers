//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShow-Protocol.h"

@class NSString, NSURL;

@interface SPTPodcastShowDecoratedItem : NSObject <SPTShow>
{
    _Bool _following;
    NSString *_title;
    NSString *_publisher;
    NSString *_descriptionText;
    NSURL *_URL;
    NSURL *_latestPlayedEpisodeURL;
    NSURL *_imageURL;
    unsigned long long _mediaType;
}

+ (id)showWithDictionary:(id)arg1;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSURL *latestPlayedEpisodeURL; // @synthesize latestPlayedEpisodeURL=_latestPlayedEpisodeURL;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic, getter=isFollowing) _Bool following; // @synthesize following=_following;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
