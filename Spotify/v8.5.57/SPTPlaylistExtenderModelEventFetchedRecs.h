//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistExtenderModelEvent-Protocol.h"

@class NSArray, NSString;

@interface SPTPlaylistExtenderModelEventFetchedRecs : NSObject <SPTPlaylistExtenderModelEvent>
{
    NSArray *_recommendations;
}

@property(readonly, nonatomic) NSArray *recommendations; // @synthesize recommendations=_recommendations;
- (void).cxx_destruct;
- (void)processWithState:(id)arg1 loop:(id)arg2;
- (id)initWithRecommendations:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

