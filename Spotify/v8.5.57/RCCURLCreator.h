//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTRemoteConfigurationContext;

@interface RCCURLCreator : NSObject
{
    id <SPTRemoteConfigurationContext> _context;
}

@property(readonly, nonatomic) id <SPTRemoteConfigurationContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)resolverURLWithFetchType:(id)arg1;
- (id)initWithRemoteConfigurationContext:(id)arg1;

@end

