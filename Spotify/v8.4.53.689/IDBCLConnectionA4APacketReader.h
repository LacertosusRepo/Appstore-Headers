//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDA4APacketReader.h"

@class NSString;

@interface IDBCLConnectionA4APacketReader : NSObject <IDA4APacketReader>
{
    unsigned long long _connectionId;
    struct IDBclConnection *_bclConnection;
}

+ (id)new;
@property struct IDBclConnection *bclConnection; // @synthesize bclConnection=_bclConnection;
@property(readonly) unsigned long long connectionId; // @synthesize connectionId=_connectionId;
- (void)readA4APacket:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithConnectionId:(unsigned long long)arg1 bclConnection:(struct IDBclConnection *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

