//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSNumber;

@interface ADJSavedPreLaunch : NSObject
{
    _Bool _offline;
    NSMutableArray *_preLaunchActionsArray;
    NSData *_deviceTokenData;
    NSNumber *_enabled;
}

@property(nonatomic) _Bool offline; // @synthesize offline=_offline;
@property(copy, nonatomic) NSNumber *enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSData *deviceTokenData; // @synthesize deviceTokenData=_deviceTokenData;
@property(retain, nonatomic) NSMutableArray *preLaunchActionsArray; // @synthesize preLaunchActionsArray=_preLaunchActionsArray;
- (void).cxx_destruct;
- (id)init;

@end

