//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GCKNHTTPRequestMap : NSObject
{
    NSMutableDictionary *_requests;
}

- (void).cxx_destruct;
- (void)cancelAndRemoveAllRequests;
- (id)removeRequestForTask:(id)arg1;
- (id)lookupRequestForTask:(id)arg1;
- (void)addRequest:(id)arg1;
- (id)init;

@end

