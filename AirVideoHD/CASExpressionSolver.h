//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface CASExpressionSolver : NSObject
{
    NSMutableArray *_tokens;
    NSMutableDictionary *_tupleByIndex;
}

+ (id)acceptableExpressionKeywords;
@property(retain, nonatomic) NSMutableDictionary *tupleByIndex; // @synthesize tupleByIndex=_tupleByIndex;
@property(retain, nonatomic) NSMutableArray *tokens; // @synthesize tokens=_tokens;
- (void).cxx_destruct;
- (id)evaluateTokens:(id)arg1 withPlaceholderToken:(id)arg2;
- (_Bool)doesToken:(id)arg1 requireSplitForTokens:(id)arg2;
- (void)extractTuples;
- (id)tokensByReducingTokens:(id)arg1;

@end

