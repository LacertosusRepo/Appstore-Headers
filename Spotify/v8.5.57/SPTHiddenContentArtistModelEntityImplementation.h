//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHiddenContentArtistModelEntity-Protocol.h"

@class NSDate, NSString, NSURL;

@interface SPTHiddenContentArtistModelEntityImplementation : NSObject <SPTHiddenContentArtistModelEntity>
{
    NSDate *_addTime;
    unsigned long long _feedback;
    NSURL *_imageURL;
    NSString *_name;
    NSURL *_URL;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) unsigned long long feedback; // @synthesize feedback=_feedback;
@property(readonly, nonatomic) NSDate *addTime; // @synthesize addTime=_addTime;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToArtistModelEntity:(id)arg1;
- (id)initWithCollectionPlatformFields:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

