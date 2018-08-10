//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GIMMe, NSArray, NSOrderedSet;

@interface YTReelWatchEndpointContainer : NSObject
{
    NSArray *_endpoints;
    NSOrderedSet *_orderedKeys;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)previousEndpointForEndpoint:(id)arg1;
- (id)nextEndpointForEndpoint:(id)arg1;
- (id)initWithEndpoints:(id)arg1;

@end
