//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCKSSecurityUtils : NSObject
{
}

+ (id)generateSecureRandomBytesOfLength:(unsigned long long)arg1 error:(id *)arg2;
+ (id)importPKCS12ItemsFromData:(id)arg1 withPassword:(id)arg2;

@end

