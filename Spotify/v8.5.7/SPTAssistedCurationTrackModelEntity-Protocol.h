//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL;

@protocol SPTAssistedCurationTrackModelEntity <NSObject>
@property(readonly, nonatomic) NSString *previewId;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSArray *artists;
@property(readonly, nonatomic, getter=isRatedExplicit) _Bool ratedExplicit;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSURL *URL;
@end

