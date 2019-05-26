//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SPTPlayerTrack;

@interface SPTPlayerQueue : NSObject <NSCopying>
{
    SPTPlayerTrack *_track;
    NSArray *_prevTracks;
    NSArray *_nextTracks;
    NSString *_revision;
}

@property(copy, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(copy, nonatomic) NSArray *nextTracks; // @synthesize nextTracks=_nextTracks;
@property(copy, nonatomic) NSArray *prevTracks; // @synthesize prevTracks=_prevTracks;
@property(copy, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedDictionary;
- (id)initWithDictionary:(id)arg1;

@end

