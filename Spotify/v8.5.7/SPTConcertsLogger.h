//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTLogCenter;

@interface SPTConcertsLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    NSString *_concertURIString;
}

@property(readonly, copy, nonatomic) NSString *concertURIString; // @synthesize concertURIString=_concertURIString;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (double)getTimestamp;
- (void)logRelatedRecommendedShowsInteractionWithConcertURI:(id)arg1;
- (void)logRelatedArtistShowsInteractionWithConcertURI:(id)arg1;
- (void)logGoToAlbumInteractionForAlbumURI:(id)arg1;
- (void)logGoToArtistInteractionForArtistURI:(id)arg1;
- (void)logFindTicketsInteraction;
- (void)logConcertEntityPageImpression;
- (id)initWithLogCenter:(id)arg1 concertURI:(id)arg2;

@end

