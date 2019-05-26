//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, SPTConcertsDateFormatter;

@interface SPTConcertsListingModel : NSObject
{
    _Bool _isRecommendedToUser;
    _Bool _isGroupedListing;
    NSString *_title;
    NSString *_subtitle;
    NSArray *_concerts;
    NSString *_venue;
    NSDate *_openingDate;
    NSDate *_closingDate;
    SPTConcertsDateFormatter *_dateFormatter;
}

+ (id)artistsFromDictionary:(id)arg1;
+ (id)entitiesWithDictionary:(id)arg1 dateFormatter:(id)arg2 artistNameFormatter:(id)arg3;
@property(nonatomic) __weak SPTConcertsDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) _Bool isGroupedListing; // @synthesize isGroupedListing=_isGroupedListing;
@property(readonly, nonatomic) _Bool isRecommendedToUser; // @synthesize isRecommendedToUser=_isRecommendedToUser;
@property(readonly, nonatomic) NSDate *closingDate; // @synthesize closingDate=_closingDate;
@property(readonly, nonatomic) NSDate *openingDate; // @synthesize openingDate=_openingDate;
@property(readonly, copy, nonatomic) NSString *venue; // @synthesize venue=_venue;
@property(readonly, copy, nonatomic) NSArray *concerts; // @synthesize concerts=_concerts;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)subtitleFromOpeningDate:(id)arg1 closingDate:(id)arg2 venue:(id)arg3;
- (id)dateFromDictionary:(id)arg1 withKey:(id)arg2;
- (id)concertsFromArray:(id)arg1;
- (id)initWithDictionary:(id)arg1 dateFormatter:(id)arg2 artistNameFormatter:(id)arg3;

@end
