//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCKSKeychain : NSObject
{
}

- (void)dumpItems;
- (id)loadIdentitiesWithLabel:(id)arg1 error:(id *)arg2;
- (int)removeIdentity:(id)arg1;
- (int)addIdentity:(id)arg1;
- (id)init;

@end

