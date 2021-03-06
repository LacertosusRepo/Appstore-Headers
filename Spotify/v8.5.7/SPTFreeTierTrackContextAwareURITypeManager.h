//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextAwareURITypeManager-Protocol.h"

@class NSString;
@protocol SPTEntityService, SPTFeatureFlagSignal;

@interface SPTFreeTierTrackContextAwareURITypeManager : NSObject <SPTContextAwareURITypeManager>
{
    _Bool _freeTierEnabled;
    id <SPTEntityService> _entityService;
    id <SPTFeatureFlagSignal> _freeTierAlbumEnabledSignal;
}

@property(nonatomic, getter=isFreeTierAlbumEnabled) _Bool freeTierEnabled; // @synthesize freeTierEnabled=_freeTierEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierAlbumEnabledSignal; // @synthesize freeTierAlbumEnabledSignal=_freeTierAlbumEnabledSignal;
@property(retain, nonatomic) id <SPTEntityService> entityService; // @synthesize entityService=_entityService;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)resolveDefaultContextForURI:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)typeManagerRecognizesURI:(id)arg1;
- (id)initWithEntityService:(id)arg1 freeTierAlbumEnabledSignal:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

