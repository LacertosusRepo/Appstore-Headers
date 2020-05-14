//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface BetamaxCDN : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *availableCdns; // @dynamic availableCdns;
@property(copy, nonatomic) NSString *cdnHost; // @dynamic cdnHost;
@property(nonatomic) long long contentLength; // @dynamic contentLength;
@property(nonatomic) _Bool hasAvailableCdns; // @dynamic hasAvailableCdns;
@property(nonatomic) _Bool hasCdnHost; // @dynamic hasCdnHost;
@property(nonatomic) _Bool hasContentLength; // @dynamic hasContentLength;
@property(nonatomic) _Bool hasMsRequestTime; // @dynamic hasMsRequestTime;
@property(nonatomic) _Bool hasRequestId; // @dynamic hasRequestId;
@property(nonatomic) _Bool hasRequestType; // @dynamic hasRequestType;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasUri; // @dynamic hasUri;
@property(nonatomic) _Bool hasUserAgent; // @dynamic hasUserAgent;
@property(nonatomic) _Bool hasVerb; // @dynamic hasVerb;
@property(nonatomic) _Bool hasVersion; // @dynamic hasVersion;
@property(nonatomic) _Bool hasXCache; // @dynamic hasXCache;
@property(nonatomic) _Bool hasXCacheHits; // @dynamic hasXCacheHits;
@property(nonatomic) long long msRequestTime; // @dynamic msRequestTime;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;
@property(copy, nonatomic) NSString *requestType; // @dynamic requestType;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) int status; // @dynamic status;
@property(copy, nonatomic) NSString *uri; // @dynamic uri;
@property(copy, nonatomic) NSString *userAgent; // @dynamic userAgent;
@property(copy, nonatomic) NSString *verb; // @dynamic verb;
@property(copy, nonatomic) NSString *version; // @dynamic version;
@property(copy, nonatomic) NSString *xCache; // @dynamic xCache;
@property(copy, nonatomic) NSString *xCacheHits; // @dynamic xCacheHits;

@end

