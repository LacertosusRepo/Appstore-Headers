//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ADJSystemProfile : NSObject
{
}

+ (id)readCpuTypeSubtype:(int)arg1 readSubType:(_Bool)arg2 cpusubtype:(int)arg3;
+ (id)cpuSubtype;
+ (id)cpuType;
+ (long long)ramsize;
+ (long long)cpuSpeed;
+ (id)appleLanguage;
+ (id)readSysctlbByNameString:(const char *)arg1 errorLog:(id)arg2;
+ (id)osVersion;
+ (id)cpuVendor;
+ (id)cpuFeatures;
+ (id)cpuBrand;
+ (id)machineModel;
+ (id)machineArch;
+ (int)cpuCount;
+ (id)cpuFamily;
+ (_Bool)is64bit;

@end

