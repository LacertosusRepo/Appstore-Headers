//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKBasicUtility : NSObject
{
}

+ (void)persistAnonymousID:(id)arg1;
+ (id)persistenceFilePath:(id)arg1;
+ (id)retrievePersistedAnonymousID;
+ (id)anonymousID;
+ (id)gzip:(id)arg1;
+ (id)URLDecode:(id)arg1;
+ (id)dictionaryWithQueryString:(id)arg1;
+ (id)URLEncode:(id)arg1;
+ (id)convertRequestValue:(id)arg1;
+ (id)queryStringWithDictionary:(id)arg1 error:(id *)arg2 invalidObjectHandler:(CDUnknownBlockType)arg3;
+ (id)objectForJSONString:(id)arg1 error:(id *)arg2;
+ (void)array:(id)arg1 addObject:(id)arg2;
+ (void)dictionary:(id)arg1 setObject:(id)arg2 forKey:(id)arg3;
+ (id)_convertObjectToJSONObject:(id)arg1 invalidObjectHandler:(CDUnknownBlockType)arg2 stop:(_Bool *)arg3;
+ (_Bool)dictionary:(id)arg1 setJSONStringForObject:(id)arg2 forKey:(id)arg3 error:(id *)arg4;
+ (id)JSONStringForObject:(id)arg1 error:(id *)arg2 invalidObjectHandler:(CDUnknownBlockType)arg3;

@end

