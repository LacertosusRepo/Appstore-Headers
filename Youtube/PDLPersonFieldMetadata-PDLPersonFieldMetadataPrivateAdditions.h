//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PDLPersonFieldMetadata.h"

#import "PDLPersonFieldMetadata.h"

@class NSArray, NSNumber, NSString;

@interface PDLPersonFieldMetadata (PDLPersonFieldMetadataPrivateAdditions) <PDLPersonFieldMetadata>
+ (long long)categoryForServerContainerType:(int)arg1;
+ (int)containerTypeForServerContainerType:(int)arg1;
@property(readonly, nonatomic) long long category;
@property(retain, nonatomic) NSArray *matchingInfoArray; // @dynamic matchingInfoArray;
- (id)affinityRankingFieldForAffinityType:(int)arg1;
@property(readonly, nonatomic) NSNumber *affinityRankingFieldAutocompleteSocial;
@property(readonly, nonatomic) long long containerType; // @dynamic containerType;
- (id)initWithPOEMPersonFieldMetadata:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *encodedProfileId;
@property(readonly, nonatomic) _Bool hasCloudData;
@property(readonly, nonatomic) _Bool hasDeviceData;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool primary;
@property(readonly) Class superclass;
@end

