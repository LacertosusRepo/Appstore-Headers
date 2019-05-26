//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData;
@protocol GNSAudioEncoding;

@interface GNSPlaybackTokenCacheKey : NSObject <NSCopying>
{
    NSData *_tokenData;
    id <GNSAudioEncoding> _tokenEncoding;
}

@property(retain, nonatomic) id <GNSAudioEncoding> tokenEncoding; // @synthesize tokenEncoding=_tokenEncoding;
@property(retain, nonatomic) NSData *tokenData; // @synthesize tokenData=_tokenData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
