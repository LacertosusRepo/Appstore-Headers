//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface GCKCastMessageSegmenterOutgoingMessage : NSObject
{
    _Bool _isBinary;
    _Bool _useChunking;
    NSData *_payload;
    NSString *_destinationID;
    unsigned long long _nextChunkOffset;
}

@property(readonly, nonatomic) _Bool useChunking; // @synthesize useChunking=_useChunking;
@property(readonly, nonatomic) _Bool isBinary; // @synthesize isBinary=_isBinary;
@property(nonatomic) unsigned long long nextChunkOffset; // @synthesize nextChunkOffset=_nextChunkOffset;
@property(readonly, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(readonly, nonatomic) NSData *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
- (id)initWithPayload:(id)arg1 isBinary:(_Bool)arg2 destinationID:(id)arg3 useChunking:(_Bool)arg4;

@end

