//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponentChildDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary;
@protocol HUBComponentFallbackHandler;

@interface HUBComponentRegistry : NSObject <HUBComponentChildDelegate>
{
    id <HUBComponentFallbackHandler> _fallbackHandler;
    NSMutableDictionary *_internalRegistry;
}

@property(retain, nonatomic) NSMutableDictionary *internalRegistry; // @synthesize internalRegistry=_internalRegistry;
@property(retain, nonatomic) id <HUBComponentFallbackHandler> fallbackHandler; // @synthesize fallbackHandler=_fallbackHandler;
- (void).cxx_destruct;
- (id)component:(id)arg1 childComponentForModel:(id)arg2;
- (void)unregisterComponentsForNamespace:(id)arg1;
- (void)registerComponents:(id)arg1 forNamespace:(id)arg2;
- (id)componentForModel:(id)arg1;
- (id)initWithFallbackHandler:(id)arg1;
@property(readonly, nonatomic) NSDictionary *registeredComponents;

@end
