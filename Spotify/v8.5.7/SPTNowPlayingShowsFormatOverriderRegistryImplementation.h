//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingShowsFormatOverriderRegistry-Protocol.h"

@class NSHashTable, NSString;

@interface SPTNowPlayingShowsFormatOverriderRegistryImplementation : NSObject <SPTNowPlayingShowsFormatOverriderRegistry>
{
    NSHashTable *_registrants;
}

@property(retain, nonatomic) NSHashTable *registrants; // @synthesize registrants=_registrants;
- (void).cxx_destruct;
- (void)removeRegistrant:(id)arg1;
- (void)addRegistrant:(id)arg1;
- (_Bool)shouldPresentShowsFormatNPVForTrack:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

