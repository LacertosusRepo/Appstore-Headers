//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface KeychainItemWrapper : NSObject
{
    NSMutableDictionary *keychainItemData;
    NSMutableDictionary *genericPasswordQuery;
}

- (void).cxx_destruct;
- (void)writeToKeychain;
- (id)secItemFormatToDictionary:(id)arg1;
- (id)dictionaryToSecItemFormat:(id)arg1;
- (void)resetKeychainItem;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2;

@end

