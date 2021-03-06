//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

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

