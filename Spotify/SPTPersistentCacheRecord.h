//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface SPTPersistentCacheRecord : NSObject
{
    unsigned long long _refCount;
    unsigned long long _ttl;
    NSString *_key;
    NSData *_data;
}

@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) unsigned long long ttl; // @synthesize ttl=_ttl;
@property(readonly, nonatomic) unsigned long long refCount; // @synthesize refCount=_refCount;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)initWithData:(id)arg1 key:(id)arg2 refCount:(unsigned long long)arg3 ttl:(unsigned long long)arg4;

@end
