//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, SPTAlbum;

@interface SPTCollectionAlbum : NSObject
{
    SPTAlbum *_album;
    NSDate *_addedTime;
}

+ (id)collectionAlbumWithAlbum:(id)arg1;
@property(retain, nonatomic) NSDate *addedTime; // @synthesize addedTime=_addedTime;
@property(retain, nonatomic) SPTAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToCollectionAlbum:(id)arg1;
- (id)collectionLinkForUsername:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name;
- (id)initWithAlbum:(id)arg1;

@end

