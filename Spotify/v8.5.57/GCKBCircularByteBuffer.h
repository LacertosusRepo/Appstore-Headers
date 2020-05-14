//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface GCKBCircularByteBuffer : NSObject
{
    NSMutableData *_data;
    char *_bytes;
    char *_end;
    char *_readPos;
    char *_writePos;
    char *_readMark;
    _Bool _empty;
}

- (void).cxx_destruct;
- (id)description;
- (void)writeNextByteUnchecked:(unsigned char)arg1;
- (unsigned char)readNextByteUnchecked;
- (void)bumpWritePosBy:(unsigned long long)arg1;
- (void)bumpReadPosBy:(unsigned long long)arg1;
- (unsigned long long)writeExtent;
- (unsigned long long)readExtent;
@property(readonly, nonatomic) unsigned long long availableToWrite;
@property(readonly, nonatomic) unsigned long long availableToRead;
- (void)rewindReadPosition;
- (void)markReadPosition;
- (void)clear;
- (long long)fillWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)writeInt64:(unsigned long long)arg1;
- (_Bool)writeInt32:(unsigned int)arg1;
- (_Bool)writeShort:(unsigned short)arg1;
- (_Bool)writeByte:(unsigned char)arg1;
- (_Bool)writeData:(id)arg1;
- (unsigned long long)writeBytes:(const char *)arg1 count:(unsigned long long)arg2 partialWriteOK:(_Bool)arg3;
- (long long)drainWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)readInt64:(unsigned long long *)arg1;
- (_Bool)readInt32:(unsigned int *)arg1;
- (_Bool)readShort:(unsigned short *)arg1;
- (_Bool)readByte:(char *)arg1;
- (_Bool)readData:(id)arg1;
- (unsigned long long)readBytes:(char *)arg1 count:(unsigned long long)arg2 partialReadOK:(_Bool)arg3;
- (_Bool)isFull;
- (_Bool)isEmpty;
@property(readonly, nonatomic) unsigned long long capacity;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

