//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol SPTCrashReporterURLPoster <NSObject>
@property(nonatomic) __weak id <SPTCrashReporterURLPosterDelegate> delegate;
- (void)postURL:(NSURL *)arg1 timeout:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)postRequestURL:(NSURL *)arg1 dataURL:(NSURL *)arg2 sessionID:(NSString *)arg3 timeout:(unsigned long long)arg4 contentType:(NSString *)arg5;
@end

