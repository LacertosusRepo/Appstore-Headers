//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface SPTConcertsAlbum : NSObject <NSCopying>
{
    NSURL *_uri;
    NSString *_albumName;
    NSString *_artistName;
    NSURL *_albumImageUri;
}

@property(readonly, copy, nonatomic) NSURL *albumImageUri; // @synthesize albumImageUri=_albumImageUri;
@property(readonly, copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(readonly, copy, nonatomic) NSURL *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithUri:(id)arg1 albumName:(id)arg2 artistName:(id)arg3 albumImageUri:(id)arg4;

@end

