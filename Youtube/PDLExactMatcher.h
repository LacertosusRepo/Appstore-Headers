//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PDLExactMatcher : NSObject
{
}

+ (_Bool)isExactMatchedIant:(id)arg1 tokenizedEmailQuery:(id)arg2 tokenizedPhoneQuery:(id)arg3 query:(id)arg4;
+ (_Bool)isMatchedTokenizedField:(id)arg1 withTokenizedQuery:(id)arg2;
+ (_Bool)isExactMatchedEmail:(id)arg1 tokenizedEmailQuery:(id)arg2;
+ (_Bool)isExactMatchedPhone:(id)arg1 tokenizedPhoneQuery:(id)arg2;
+ (id)phoneTokenFromSource:(id)arg1;
+ (id)emailTokenFromSource:(id)arg1;
+ (id)matchAutocompletions:(id)arg1 query:(id)arg2 clientConfig:(id)arg3 matcherStats:(id)arg4;

@end

