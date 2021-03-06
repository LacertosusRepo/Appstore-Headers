//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTLocalFileTrackInfo.h"

@class NSString, NSURL;

@interface SPTLocalFileTrackInfo : NSObject <SPTLocalFileTrackInfo>
{
    NSString *_artist;
    NSString *_albumTitle;
    NSURL *_URL;
    NSString *_title;
    NSURL *_imageURL;
    long long _playbackDuration;
}

@property(nonatomic) long long playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *UUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

