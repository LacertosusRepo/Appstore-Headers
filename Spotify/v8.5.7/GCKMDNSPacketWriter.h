//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData, NSMutableDictionary;

@interface GCKMDNSPacketWriter : NSObject
{
    NSMutableData *_mutableData;
    char *_start;
    char *_pointer;
    const char *_end;
    char *_savedWritePos;
    NSMutableDictionary *_labelDictionary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) unsigned long long remaining;
@property(readonly, nonatomic) unsigned long long position;
- (_Bool)checkBytesRemaining:(unsigned long long)arg1;
- (_Bool)writePointer:(unsigned long long)arg1;
- (_Bool)writeBytes:(const char *)arg1 count:(unsigned long long)arg2;
- (_Bool)writeBytes:(id)arg1;
- (_Bool)writeString:(id)arg1;
- (_Bool)writeLabels:(id)arg1;
- (_Bool)writeUInt32:(unsigned int)arg1;
- (_Bool)writeUInt16:(unsigned short)arg1;
- (_Bool)writeUInt8:(unsigned char)arg1;
- (_Bool)truncateTo:(unsigned long long)arg1;
- (void)clearRewind;
- (_Bool)unrewind;
- (_Bool)rewindTo:(unsigned long long)arg1;
- (id)initWithMaxSize:(unsigned long long)arg1;

@end

