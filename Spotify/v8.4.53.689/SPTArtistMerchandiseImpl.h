//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTArtistEntityImpl.h"

#import "SPTArtistMerchandise.h"

@class NSString, NSURL;

@interface SPTArtistMerchandiseImpl : SPTArtistEntityImpl <SPTArtistMerchandise>
{
    NSString *_details;
}

@property(retain, nonatomic) NSString *details; // @synthesize details=_details;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *fileId;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <SPTArtistImage> headerImage;
@property(readonly, nonatomic) id <SPTArtistImage> image;
@property(readonly, nonatomic) NSString *name;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSURL *uri;

@end

