//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCDAsyncSocketPreBuffer : NSObject
{
    char *preBuffer;
    unsigned long long preBufferSize;
    char *readPointer;
    char *writePointer;
}

- (void)reset;
- (void)didWrite:(unsigned long long)arg1;
- (void)getWriteBuffer:(char **)arg1 availableSpace:(unsigned long long *)arg2;
- (char *)writeBuffer;
- (unsigned long long)availableSpace;
- (void)didRead:(unsigned long long)arg1;
- (void)getReadBuffer:(char **)arg1 availableBytes:(unsigned long long *)arg2;
- (char *)readBuffer;
- (unsigned long long)availableBytes;
- (void)ensureCapacityForWrite:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

