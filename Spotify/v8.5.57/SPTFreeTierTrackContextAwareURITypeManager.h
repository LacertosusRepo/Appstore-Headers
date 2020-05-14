//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextAwareURITypeManager-Protocol.h"

@class NSString;
@protocol SPTEntityService;

@interface SPTFreeTierTrackContextAwareURITypeManager : NSObject <SPTContextAwareURITypeManager>
{
    id <SPTEntityService> _entityService;
}

@property(retain, nonatomic) id <SPTEntityService> entityService; // @synthesize entityService=_entityService;
- (void).cxx_destruct;
- (void)resolveDefaultContextForURI:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)typeManagerRecognizesURI:(id)arg1;
- (id)initWithEntityService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

