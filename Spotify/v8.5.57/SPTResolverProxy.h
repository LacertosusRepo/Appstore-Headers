//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTResolver-Protocol.h"

@class NSString;
@protocol SPTResolver;

@interface SPTResolverProxy : NSObject <SPTResolver>
{
    id <SPTResolver> _resolver;
}

@property(nonatomic) __weak id <SPTResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (id)resolve:(id)arg1 onValue:(CDUnknownBlockType)arg2 onClose:(CDUnknownBlockType)arg3;
- (id)initWithResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

