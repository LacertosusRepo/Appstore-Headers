//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTContextAwareURITypeManager.h"

@class NSString;

@interface SPTPodcastContextAwareURITypeManager : NSObject <SPTContextAwareURITypeManager>
{
    id <SPTShowEntityService> _entityService;
}

@property(retain, nonatomic) id <SPTShowEntityService> entityService; // @synthesize entityService=_entityService;
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

