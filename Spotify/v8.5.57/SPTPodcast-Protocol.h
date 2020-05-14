//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SPTShow-Protocol.h"

@class NSArray;
@protocol SPTPodcastEpisode;

@protocol SPTPodcast <NSObject, SPTShow>
@property(nonatomic, readonly) id <SPTPodcastEpisode> trailerEpisode;
@property(nonatomic, readonly) NSArray *episodes;
@property(nonatomic, readonly) unsigned long long unrangedLength;
@property(nonatomic, readonly) long long consumptionOrder;
@property(nonatomic, readonly) long long numberOfFollowers;
@end
