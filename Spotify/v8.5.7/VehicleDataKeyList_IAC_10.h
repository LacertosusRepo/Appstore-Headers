//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface VehicleDataKeyList_IAC_10 : NSObject
{
    unsigned int _length;
    NSData *_keys;
}

@property(retain) NSData *keys; // @synthesize keys=_keys;
@property unsigned int length; // @synthesize length=_length;
- (void).cxx_destruct;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end
