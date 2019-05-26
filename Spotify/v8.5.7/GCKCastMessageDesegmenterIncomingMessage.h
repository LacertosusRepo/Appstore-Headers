//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;

@interface GCKCastMessageDesegmenterIncomingMessage : NSObject
{
    _Bool _isBinary;
    NSMutableData *_payload;
    NSString *_destinationID;
    unsigned long long _nextChunkOffset;
}

@property(readonly, nonatomic) _Bool isBinary; // @synthesize isBinary=_isBinary;
@property(nonatomic) unsigned long long nextChunkOffset; // @synthesize nextChunkOffset=_nextChunkOffset;
@property(readonly, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(readonly, nonatomic) NSMutableData *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
- (void)appendChunk:(id)arg1;
- (id)initWithPayloadSize:(unsigned long long)arg1 isBinary:(_Bool)arg2 destinationID:(id)arg3;

@end
