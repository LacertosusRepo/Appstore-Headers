//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTURIComponentMatcher.h"

@class NSString;

@interface SPTURILiteralComponentMatcher : SPTURIComponentMatcher
{
    NSString *_literal;
}

- (void).cxx_destruct;
- (_Bool)isEquivalent:(id)arg1;
- (id)matchComponents:(id)arg1 fromIndex:(unsigned long long)arg2 variables:(id)arg3;
- (id)initWithLiteral:(id)arg1 children:(id)arg2;

@end

