//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlayerObserver.h"

@class NSString;

@interface SPTAdsActivityLogger : NSObject <SPTPlayerObserver>
{
    _Bool _active;
    id <SPTPlayer> _player;
    id <SPTComScoreAnalyticsManager> _comScoreAnalytics;
}

@property(retain, nonatomic) id <SPTComScoreAnalyticsManager> comScoreAnalytics; // @synthesize comScoreAnalytics=_comScoreAnalytics;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 comScoreAnalyticsManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

