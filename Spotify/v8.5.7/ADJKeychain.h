//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADJKeychain : NSObject
{
}

+ (const struct __CFString **)getSecAttrAccessGroupToken;
+ (id)valueForKeychainKeyV2:(id)arg1 service:(id)arg2;
+ (id)valueForKeychainKeyV1:(id)arg1 service:(id)arg2;
+ (_Bool)setValue:(id)arg1 forKeychainKey:(id)arg2 inService:(id)arg3;
+ (id)getInstance;
- (_Bool)wasWritingSuccessful:(id)arg1 forKeychainKey:(id)arg2 inService:(id)arg3;
- (int)setValueWithStatus:(id)arg1 forKeychainKey:(id)arg2 inService:(id)arg3;
- (void)keychainItemForKey:(id)arg1 key:(id)arg2 service:(id)arg3;
- (id)keychainItemForKeyV1:(id)arg1 service:(id)arg2;
- (id)keychainItemForKeyV2:(id)arg1 service:(id)arg2;
- (id)valueForKeychainItem:(id)arg1 key:(id)arg2 service:(id)arg3;
- (id)valueForKeychainKeyV1:(id)arg1 service:(id)arg2;
- (id)valueForKeychainKeyV2:(id)arg1 service:(id)arg2;
- (_Bool)setValue:(id)arg1 forKeychainKey:(id)arg2 inService:(id)arg3;
- (id)init;

@end

