//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTFreeTierTasteOnboardingTrackSwipeViewLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logInteractionType:(id)arg1 withIntent:(id)arg2 sectionID:(id)arg3 index:(unsigned long long)arg4 identifier:(id)arg5;
- (void)logInteractionType:(id)arg1 withIntent:(id)arg2 sectionID:(id)arg3;
- (void)logImpressionType:(id)arg1 withRenderType:(id)arg2 sectionID:(id)arg3 index:(unsigned long long)arg4 identifier:(id)arg5;
- (void)logImpressionType:(id)arg1 withRenderType:(id)arg2 sectionID:(id)arg3;
- (void)logDoneCompleteImpression;
- (void)logDoneInteraction:(_Bool)arg1;
- (void)logItemInteractionWithIdentifier:(id)arg1 position:(unsigned long long)arg2 liked:(_Bool)arg3 swiped:(_Bool)arg4;
- (void)logItemImpressionWithIdentifier:(id)arg1 position:(unsigned long long)arg2;
- (void)logSkipInteraction;
- (void)logStartInteraction;
- (id)initWithLogCenter:(id)arg1;

@end

