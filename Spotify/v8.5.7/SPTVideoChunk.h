//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVideoChunk-Protocol.h"

@class NSData, NSString;

@interface SPTVideoChunk : NSObject <SPTVideoChunk>
{
    NSString *_key;
    unsigned long long _startPosition;
    NSData *_data;
}

+ (id)videoChunkWithData:(id)arg1;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long startPosition; // @synthesize startPosition=_startPosition;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)videoChunkByStartPosition:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (id)videoChunkByMergingChunk:(id)arg1;
@property(readonly, nonatomic) unsigned long long length;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toData;
- (id)initWithKey:(id)arg1 startPosition:(unsigned long long)arg2 data:(id)arg3;

@end
