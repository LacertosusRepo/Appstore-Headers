//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, PDLClientConfigInternal, PDLPeopleLookupOptions, PDLPersonID, PDLPersonWithIDOptions;

@protocol PDLConfigurationService <NSObject>
- (PDLClientConfigInternal *)lookupConfigWithClientID:(long long)arg1 IDTypes:(NSSet *)arg2 enableIantCategory:(_Bool)arg3 options:(PDLPeopleLookupOptions *)arg4;
- (PDLClientConfigInternal *)lookupConfigWithClientId:(long long)arg1 personID:(PDLPersonID *)arg2 options:(PDLPersonWithIDOptions *)arg3;
- (PDLClientConfigInternal *)configWithClientId:(long long)arg1;
@end
