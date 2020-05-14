//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMEventObserver-Protocol.h"

@class NSArray, NSString;
@protocol BMSubtitle, OS_dispatch_queue;

@interface SPTVideoSubtitleProvider : NSObject <BMEventObserver>
{
    NSArray *_availableSubtitles;
    id <BMSubtitle> _activeSubtitle;
}

@property(readonly, nonatomic) id <BMSubtitle> activeSubtitle; // @synthesize activeSubtitle=_activeSubtitle;
@property(readonly, copy, nonatomic) NSArray *availableSubtitles; // @synthesize availableSubtitles=_availableSubtitles;
- (void).cxx_destruct;
- (void)didChangeSubtitle:(id)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didLoadManifestWithAvailableSubtitles:(id)arg1 timestamp:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

