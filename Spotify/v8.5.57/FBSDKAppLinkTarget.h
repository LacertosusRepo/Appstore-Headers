//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface FBSDKAppLinkTarget : NSObject
{
    NSURL *_URL;
    NSString *_appStoreId;
    NSString *_appName;
}

+ (id)appLinkTargetWithURL:(id)arg1 appStoreId:(id)arg2 appName:(id)arg3;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appStoreId; // @synthesize appStoreId=_appStoreId;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;

@end
