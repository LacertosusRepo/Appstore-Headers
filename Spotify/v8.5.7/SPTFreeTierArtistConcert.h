//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierArtistEntity-Protocol.h"

@class CLLocation, NSDate, NSString, NSURL;
@protocol SPTFreeTierArtistImage;

@interface SPTFreeTierArtistConcert : NSObject <SPTFreeTierArtistEntity>
{
    id <SPTFreeTierArtistImage> _headerImage;
    NSString *_name;
    NSString *_fileId;
    id <SPTFreeTierArtistImage> _image;
    NSURL *_uri;
    NSURL *_URI;
    NSDate *_date;
    NSString *_title;
    CLLocation *_location;
    NSString *_city;
    NSString *_venue;
    NSURL *_partnerURL;
    NSString *_concertID;
    NSURL *_concertEntityViewURI;
}

+ (id)concertsWithArray:(id)arg1;
@property(readonly, nonatomic) NSURL *concertEntityViewURI; // @synthesize concertEntityViewURI=_concertEntityViewURI;
@property(readonly, nonatomic) NSString *concertID; // @synthesize concertID=_concertID;
@property(readonly, nonatomic) NSURL *partnerURL; // @synthesize partnerURL=_partnerURL;
@property(readonly, copy, nonatomic) NSString *venue; // @synthesize venue=_venue;
@property(readonly, copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(readonly, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(readonly, nonatomic) id <SPTFreeTierArtistImage> image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) id <SPTFreeTierArtistImage> headerImage; // @synthesize headerImage=_headerImage;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
