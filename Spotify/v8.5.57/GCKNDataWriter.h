//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKNWriter.h"

@class NSMutableData;

@interface GCKNDataWriter : GCKNWriter
{
    NSMutableData *_data;
}

@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (_Bool)writeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithData:(id)arg1 byteOrder:(long long)arg2;

@end

