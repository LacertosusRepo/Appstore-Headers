//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, SPTArtist;

@interface SPTAlbum : NSObject
{
    _Bool _isAvailable;
    BOOL _albumType;
    _Bool _premiumOnly;
    NSURL *_URL;
    NSString *_name;
    SPTArtist *_artist;
    long long _year;
    long long _month;
    long long _day;
    long long _tracksCount;
    NSArray *_imageURLs;
}

+ (id)albumWithAlbumInfo:(const struct AlbumInfo *)arg1;
@property(retain, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
@property(readonly, nonatomic, getter=isPremiumOnly) _Bool premiumOnly; // @synthesize premiumOnly=_premiumOnly;
@property(nonatomic) long long tracksCount; // @synthesize tracksCount=_tracksCount;
@property(nonatomic) BOOL albumType; // @synthesize albumType=_albumType;
@property(nonatomic) long long day; // @synthesize day=_day;
@property(nonatomic) long long month; // @synthesize month=_month;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(nonatomic) _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(retain, nonatomic) SPTArtist *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *coverImageLink;
- (id)imageURLForSize:(int)arg1;
- (id)initWithURL:(id)arg1 name:(id)arg2 artist:(id)arg3 imageURLs:(id)arg4 isAvailable:(_Bool)arg5 year:(long long)arg6 month:(long long)arg7 day:(long long)arg8 albumType:(BOOL)arg9 tracksCount:(long long)arg10 isPremiumOnly:(_Bool)arg11;

@end

