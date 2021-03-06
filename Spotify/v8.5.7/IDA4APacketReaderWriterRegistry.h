//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDA4AProtocol, NSLock, NSMapTable;
@protocol IDA4APacketWriter;

@interface IDA4APacketReaderWriterRegistry : NSObject
{
    IDA4AProtocol *_a4aProtocol;
    NSMapTable *_readers;
    id <IDA4APacketWriter> _writer;
    NSLock *_packetReaderLock;
    struct _NSRange _validConnectionIds;
}

@property struct _NSRange validConnectionIds; // @synthesize validConnectionIds=_validConnectionIds;
@property(readonly) NSLock *packetReaderLock; // @synthesize packetReaderLock=_packetReaderLock;
@property __weak id <IDA4APacketWriter> writer; // @synthesize writer=_writer;
@property(retain) NSMapTable *readers; // @synthesize readers=_readers;
@property(retain) IDA4AProtocol *a4aProtocol; // @synthesize a4aProtocol=_a4aProtocol;
- (void).cxx_destruct;
- (struct _NSRange)connectionIdRangeForProtocol:(id)arg1;
- (long long)nextAvailableConnectionId;
- (void)registerA4AProtocol:(id)arg1;
- (void)registerA4APacketWriter:(id)arg1;
- (void)deregisterA4APacketReader:(id)arg1;
- (void)registerA4APacketReader:(id)arg1;
- (id)init;

@end

