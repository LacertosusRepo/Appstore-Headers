//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTConcertsDateFormatter;
@protocol OS_dispatch_queue;

@interface SPTConcertsEntityJSONTransfomer : NSObject
{
    SPTConcertsDateFormatter *_dateFormatterProvider;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) SPTConcertsDateFormatter *dateFormatterProvider; // @synthesize dateFormatterProvider=_dateFormatterProvider;
- (void).cxx_destruct;
- (void)dispatchInvalidDataErrorForCompletion:(CDUnknownBlockType)arg1;
- (void)dispatchCompletion:(CDUnknownBlockType)arg1 forEntity:(id)arg2 orError:(id)arg3;
- (unsigned long long)availabiltyFromString:(id)arg1;
- (id)priceFromTicketingArray:(id)arg1;
- (id)dateFromDateJSON:(id)arg1;
- (id)relatedConcertFromJSON:(id)arg1 fromSource:(id)arg2;
- (id)relatedConcertsFromRelatedConcertsJSON:(id)arg1 fromSource:(id)arg2;
- (id)artistsFromArtistsJSON:(id)arg1;
- (id)partnerNameFromArray:(id)arg1;
- (id)albumFromAlbumJSON:(id)arg1;
- (id)entityFromJSON:(id)arg1;
- (void)performTransformFromJSONData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)entityFromJSONData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDateFormatterProvider:(id)arg1;

@end

