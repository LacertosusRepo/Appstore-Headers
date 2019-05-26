//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GCKSavedSessionState : NSObject
{
    _Bool _cellularNetwork;
    NSString *_deviceUniqueID;
    NSString *_sessionID;
    struct NSDictionary *_sessionOptions;
    double _createTime;
}

@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(nonatomic) _Bool cellularNetwork; // @synthesize cellularNetwork=_cellularNetwork;
@property(copy, nonatomic) NSDictionary *sessionOptions; // @synthesize sessionOptions=_sessionOptions;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
- (void).cxx_destruct;
- (_Bool)matchesDevice:(id)arg1;
- (_Bool)isValid;
- (void)clear;
- (_Bool)restore;
- (void)saveWithDeviceUniqueID:(id)arg1 sessionID:(id)arg2 sessionOptions:(struct NSDictionary *)arg3 cellularNetwork:(_Bool)arg4;
- (id)init;

@end

