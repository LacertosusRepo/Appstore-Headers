//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTLogCenter, SPTUBILogger, SPTUBIMobileConcertsEntityEventFactory;

@interface SPTConcertsLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTUBILogger> _ubiLogger;
    id <SPTUBIMobileConcertsEntityEventFactory> _concertEntityEventFactory;
    NSString *_concertURIString;
}

@property(readonly, copy, nonatomic) NSString *concertURIString; // @synthesize concertURIString=_concertURIString;
@property(readonly, nonatomic) id <SPTUBIMobileConcertsEntityEventFactory> concertEntityEventFactory; // @synthesize concertEntityEventFactory=_concertEntityEventFactory;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (double)getTimestamp;
- (void)logRelatedRecommendedShowsInteractionWithConcertURI:(id)arg1;
- (void)logRelatedArtistShowsInteractionWithConcertURI:(id)arg1;
- (void)logGoToAlbumInteractionForAlbumURI:(id)arg1;
- (void)logGoToArtistInteractionForArtistURI:(id)arg1;
- (void)logShareButtonInteraction;
- (void)logFindTicketsInteractionForURI:(id)arg1;
- (void)logConcertEntityPageImpression;
- (id)initWithLogCenter:(id)arg1 concertURI:(id)arg2 ubiLogger:(id)arg3 concertEntityEventFactory:(id)arg4;

@end

