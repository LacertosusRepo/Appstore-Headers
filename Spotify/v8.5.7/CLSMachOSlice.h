//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CLSMachOSlice : NSObject
{
    struct CLSMachOSlice _slice;
    NSString *_uuidString;
    NSArray *_linkedDylibs;
    CDStruct_e24ffa00 _minimumOSVersion;
    CDStruct_e24ffa00 _linkedSDKVersion;
}

+ (id)runningSlice;
@property(readonly, nonatomic) CDStruct_e24ffa00 linkedSDKVersion; // @synthesize linkedSDKVersion=_linkedSDKVersion;
@property(readonly, nonatomic) CDStruct_e24ffa00 minimumOSVersion; // @synthesize minimumOSVersion=_minimumOSVersion;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *linkedDylibs;
@property(readonly, copy, nonatomic) NSString *uuid;
@property(readonly, copy, nonatomic) NSString *architectureName;
- (id)initWithSlice:(struct CLSMachOSlice *)arg1;

@end

