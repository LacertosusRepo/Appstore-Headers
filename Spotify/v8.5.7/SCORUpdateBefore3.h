//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCORUpdateBefore3 : NSObject
{
    shared_ptr_4af07e7b _cppPropertyManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)set:(id)arg1 value:(id)arg2;
- (void)moveOldStorage;
- (void)migrateOldKey:(id)arg1 toNewKey:(id)arg2;
- (void)migrateOldKey:(id)arg1 toNewKeys:(id)arg2;
- (void)migrateOldStorageKeys;
- (void)removeV3Key:(id)arg1;
- (id)getV3Key:(id)arg1;
- (void)libraryUpdateWithNewData:(shared_ptr_4af07e7b)arg1;
- (id)init;

@end
