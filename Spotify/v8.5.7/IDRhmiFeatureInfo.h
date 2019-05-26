//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class IDVersionInfo, NSArray, NSData, NSDictionary, NSNumber, NSString, NSURL, NSUUID;

@interface IDRhmiFeatureInfo : NSObject <NSCoding>
{
    NSUUID *_identifier;
    NSString *_hmiCategory;
    NSString *_name;
    IDVersionInfo *_version;
    NSDictionary *_localizedNames;
    NSArray *_supportedBrands;
    NSNumber *_weight;
    NSNumber *_mainStateId;
    NSNumber *_entryButtonId;
    NSString *_bundleId;
    NSArray *_additionalEntryButtons;
    NSArray *_requiredServices;
    NSURL *_url;
    NSData *_iconData;
}

+ (id)allRHMICategories;
+ (id)allVehicleBrands;
@property(readonly, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSArray *requiredServices; // @synthesize requiredServices=_requiredServices;
@property(readonly, nonatomic) NSArray *additionalEntryButtons; // @synthesize additionalEntryButtons=_additionalEntryButtons;
@property(readonly, copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(readonly, nonatomic) NSNumber *entryButtonId; // @synthesize entryButtonId=_entryButtonId;
@property(readonly, nonatomic) NSNumber *mainStateId; // @synthesize mainStateId=_mainStateId;
@property(readonly, nonatomic) NSNumber *weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) NSArray *supportedBrands; // @synthesize supportedBrands=_supportedBrands;
@property(readonly, nonatomic) NSDictionary *localizedNames; // @synthesize localizedNames=_localizedNames;
@property(readonly, nonatomic) IDVersionInfo *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *hmiCategory; // @synthesize hmiCategory=_hmiCategory;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToFeatureInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)twentyFourBitTruncatedHash;
- (id)localizedName:(long long)arg1;
- (id)initWithIdentifier:(id)arg1 hmiCategory:(id)arg2 name:(id)arg3 version:(id)arg4 localizedNames:(id)arg5 supportedBrands:(id)arg6 url:(id)arg7 iconData:(id)arg8;
- (id)initWithIdentifier:(id)arg1 hmiCategory:(id)arg2 name:(id)arg3 mainStateId:(id)arg4 entryButtonId:(id)arg5 weight:(id)arg6 bundleId:(id)arg7 version:(id)arg8 localizedNames:(id)arg9 supportedBrands:(id)arg10 url:(id)arg11 iconData:(id)arg12 additionalEntryButtons:(id)arg13 requiredServices:(id)arg14;
- (long long)previewTextKeyForISOLanguageCode:(id)arg1;
- (long long)titleKeyForISOLanguageCode:(id)arg1;
- (id)localizedApplicationNotConnectedPreviewStrings;
- (id)addPreviewStringsToVariantMap:(id)arg1;
- (id)serializeToVariantMapWithHmiCategory:(id)arg1 entryButtonId:(id)arg2 weight:(id)arg3;
- (id)serializeAdditionalEntryButtonToVariantMap:(unsigned long long)arg1;
- (id)serializeToVariantMap;
- (id)initWithJSONObject:(id)arg1 iconData:(id)arg2;

@end

