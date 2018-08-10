//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PDLAutocompletion.h"

#import "PDLAutocompletion.h"

@class NSArray, NSSet, NSString, PDLLogEntity;

@interface PDLAutocompletion (PDLAutocompletionPrivateAdditions) <PDLAutocompletion>
+ (id)filteredFieldArray:(id)arg1 fieldBuilder:(id)arg2;
- (_Bool)hasCertificateForEmail:(id)arg1;
- (id)copy;
- (id)fieldDeduplicatedAutocompletion;
- (id)mergedAutocompletionWithAutocompletion:(id)arg1;
@property(retain, nonatomic) NSArray *matchingFieldArray; // @dynamic matchingFieldArray;
- (id)orderedContactMethodFieldArrayWithAffinityType:(int)arg1;
@property(readonly, nonatomic) NSArray *orderedContactMethodFieldArray; // @dynamic orderedContactMethodFieldArray;
@property(retain, nonatomic) PDLLogEntity *logEntity; // @dynamic logEntity;
- (void)setupLogEntityWithPosition:(unsigned long long)arg1 affinityType:(int)arg2 query:(id)arg3 querySessionID:(id)arg4;
- (id)affinityRankingWithClientConfig:(id)arg1 useFieldAffinity:(_Bool)arg2;
- (id)flattenedAutocompletions:(id)arg1;
- (id)maybeFlattenAutocompletions:(id)arg1 forced:(_Bool)arg2;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSSet *deliveryFieldsWithoutGaiaIdStringHashSet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <PDLGroup> group;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long objectType;
@property(readonly, nonatomic) id <PDLPerson> person;
@property(readonly) Class superclass;
@end

