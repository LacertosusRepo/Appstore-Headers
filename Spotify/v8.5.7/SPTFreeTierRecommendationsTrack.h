//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierRecommendationsTrackModelEntity-Protocol.h"

@class NSArray, NSString, NSURL;

@interface SPTFreeTierRecommendationsTrack : NSObject <SPTFreeTierRecommendationsTrackModelEntity>
{
    _Bool _ratedExplicit;
    NSString *_name;
    NSURL *_URL;
    NSArray *_artists;
    NSURL *_imageURL;
    NSString *_albumName;
    NSURL *_albumURL;
    NSString *_previewId;
}

@property(readonly, nonatomic, getter=isRatedExplicit) _Bool ratedExplicit; // @synthesize ratedExplicit=_ratedExplicit;
@property(readonly, copy, nonatomic) NSString *previewId; // @synthesize previewId=_previewId;
@property(readonly, nonatomic) NSURL *albumURL; // @synthesize albumURL=_albumURL;
@property(readonly, copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
