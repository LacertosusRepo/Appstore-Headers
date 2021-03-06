//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBMutableJSONPath-Protocol.h"

@class NSArray;

@interface HUBMutableJSONPathImplementation : NSObject <HUBMutableJSONPath>
{
    NSArray *_parsingOperations;
}

+ (id)path;
@property(readonly, nonatomic) NSArray *parsingOperations; // @synthesize parsingOperations=_parsingOperations;
- (void).cxx_destruct;
- (id)destinationPathWithFinalParsingOperation:(id)arg1;
- (id)destinationPathWithExpectedType:(Class)arg1;
- (id)pathByAppendingParsingOperation:(id)arg1;
- (id)copy;
- (id)dictionaryPath;
- (id)URLPath;
- (id)stringPath;
- (id)integerPath;
- (id)boolPath;
- (id)combineWithPath:(id)arg1;
- (id)runBlock:(CDUnknownBlockType)arg1;
- (id)forEach;
- (id)goTo:(id)arg1;
- (id)initWithParsingOperations:(id)arg1;

@end

