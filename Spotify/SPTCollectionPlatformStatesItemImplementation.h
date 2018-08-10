//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionPlatformStatesItem.h"

@class NSString, NSURL;

@interface SPTCollectionPlatformStatesItemImplementation : NSObject <SPTCollectionPlatformStatesItem>
{
    NSURL *_URL;
    unsigned long long _collectionState;
}

@property(readonly, nonatomic) unsigned long long collectionState; // @synthesize collectionState=_collectionState;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 collectionState:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
