//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YTCriticalRequests : NSObject
{
}

+ (void)makeHomeBrowseRequestWithBrowseService:(id)arg1;
+ (void)makeResolveUrlRequestWithUrl:(id)arg1 referringApp:(id)arg2 resolveUrlService:(id)arg3 clientSideResolveController:(id)arg4;
+ (void)maybeRunCriticalRequestPrefetchingDidStartBlock;
+ (void)setCriticalRequestPrefetchingDidStartBlock:(CDUnknownBlockType)arg1;
+ (id)criticalResolveUrlRequestWithUrl:(id)arg1 referringApp:(id)arg2;
+ (id)criticalBrowseRequest;
+ (void)makeCriticalRequestsWithApplicationState:(long long)arg1 options:(id)arg2 gimme:(id)arg3;

@end

