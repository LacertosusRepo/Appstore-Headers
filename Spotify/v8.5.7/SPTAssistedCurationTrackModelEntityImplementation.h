//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationTrackModelEntity-Protocol.h"

@class NSArray, NSString, NSURL;

@interface SPTAssistedCurationTrackModelEntityImplementation : NSObject <SPTAssistedCurationTrackModelEntity>
{
    _Bool _ratedExplicit;
    NSURL *_URL;
    NSString *_name;
    NSArray *_artists;
    NSURL *_imageURL;
    NSString *_previewId;
}

@property(readonly, nonatomic) NSString *previewId; // @synthesize previewId=_previewId;
@property(readonly, nonatomic, getter=isRatedExplicit) _Bool ratedExplicit; // @synthesize ratedExplicit=_ratedExplicit;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 name:(id)arg2 artists:(id)arg3 imageURL:(id)arg4 ratedExplicit:(_Bool)arg5 previewId:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

