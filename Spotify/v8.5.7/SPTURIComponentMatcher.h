//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SPTURIComponentMatcher : NSObject
{
    NSArray *_children;
}

+ (id)tailMatcherWithPayload:(id)arg1;
+ (id)terminalMatcherWithPayload:(id)arg1;
+ (id)matcherWithToken:(id)arg1 children:(id)arg2;
+ (id)matcherWithLiteral:(id)arg1 children:(id)arg2;
+ (id)matcherWithScheme:(id)arg1 children:(id)arg2;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
- (void).cxx_destruct;
- (_Bool)isEquivalent:(id)arg1;
@property(readonly, nonatomic) id payload;
- (void)addChild:(id)arg1;
- (id)matchChildComponents:(id)arg1 fromIndex:(unsigned long long)arg2 variables:(id)arg3;
- (id)matchComponents:(id)arg1 fromIndex:(unsigned long long)arg2 variables:(id)arg3;
- (id)matchComponents:(id)arg1;
- (id)initWithChildren:(id)arg1;

@end
