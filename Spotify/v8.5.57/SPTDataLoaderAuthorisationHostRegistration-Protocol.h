//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSSet, NSString;

@protocol SPTDataLoaderAuthorisationHostRegistration <NSObject, NSCopying>
- (void)unregisterAuthorisationHostsName:(NSString *)arg1;
- (void)registerAuthorisationHosts:(NSSet *)arg1 withName:(NSString *)arg2;
@end
