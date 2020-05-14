//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KeychainItemWrapper, NSString, SKProduct;
@protocol SPTLocalSettings;

@interface InAppPurchaseModel : NSObject
{
    long long _state;
    NSString *_productIdentifier;
    SKProduct *_storeProduct;
    id <SPTLocalSettings> _localSettings;
    KeychainItemWrapper *_keychain;
}

+ (_Bool)hasStoredRecipt;
+ (id)keyPathsForValuesAffectingAvailablePremiumProductIncludes30DayTrial;
@property(retain, nonatomic) KeychainItemWrapper *keychain; // @synthesize keychain=_keychain;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) SKProduct *storeProduct; // @synthesize storeProduct=_storeProduct;
@property(retain, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (_Bool)isProductAvailableForPurchase;
@property(readonly, nonatomic) _Bool availablePremiumProductIncludes30DayTrial;
- (id)savedReceiptData;
- (void)removeSavedReceiptData;
- (void)saveReceiptData:(id)arg1;
- (id)localizedPriceForProduct:(id)arg1;
- (id)localizedProductPrice;
- (void)invalidateProduct;
- (void)resetState;
- (void)clearSettings;
- (_Bool)hasPremiumProductSettingExpired;
- (_Bool)isPremiumProductAvailable;
- (id)allProductIdentifiers;
- (id)initWithLocalSettings:(id)arg1;

@end

