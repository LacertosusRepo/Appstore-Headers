//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface String_IAC_10 : NSObject
{
    unsigned char _encoding;
    unsigned short _length;
    NSData *_content;
}

@property(retain) NSData *content; // @synthesize content=_content;
@property unsigned short length; // @synthesize length=_length;
@property unsigned char encoding; // @synthesize encoding=_encoding;
- (void).cxx_destruct;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end

