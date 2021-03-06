//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierCollectionCosmosOptionsUpdate-Protocol.h"
#import "SPTSortingFilteringSortRule-Protocol.h"

@class NSString;

@interface SPTFreeTierCollectionCosmosSortRule : NSObject <SPTSortingFilteringSortRule, SPTFreeTierCollectionCosmosOptionsUpdate>
{
    _Bool _ascendingOrder;
    NSString *_identifier;
    NSString *_title;
    CDUnknownBlockType _applyRule;
}

+ (id)ruleWithIdentifier:(id)arg1 title:(id)arg2 ascendingOrder:(_Bool)arg3 applyRule:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType applyRule; // @synthesize applyRule=_applyRule;
@property(readonly, nonatomic) _Bool ascendingOrder; // @synthesize ascendingOrder=_ascendingOrder;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)applyRuleToOptions:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 ascendingOrder:(_Bool)arg3 applyRule:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

