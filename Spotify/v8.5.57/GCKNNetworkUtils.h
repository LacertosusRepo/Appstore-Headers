//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCKNNetworkUtils : NSObject
{
}

+ (id)getCurrentNetworkAddress;
+ (id)selectNetworkInterfaceForMulticastFromInterfaces:(id)arg1 allowIPv6:(_Bool)arg2;
+ (int)getTwoLowerBytesFromNetworkAddress:(id)arg1;
+ (int)getTwoLowerBytesFromIPAddress:(id)arg1;
+ (int)getTwoHigherBytesFromNetworkAddress:(id)arg1;
+ (int)getTwoHigherBytesFromIPAddress:(id)arg1;

@end

