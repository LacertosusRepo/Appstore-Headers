//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol SPTLinkDispatcher <NSObject>
- (_Bool)navigateToURI:(NSURL *)arg1 sourceApplication:(NSString *)arg2 annotation:(id)arg3 options:(long long)arg4;
- (_Bool)openURI:(NSURL *)arg1 useCurrentStack:(_Bool)arg2;
- (_Bool)canOpenURI:(NSURL *)arg1 allowExternalApps:(_Bool)arg2;
@end

