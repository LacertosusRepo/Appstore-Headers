//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (GCKBAdditions)
+ (id)gckb_dataWithHexString:(id)arg1;
- (long long)gckb_locationOfBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (id)gckb_SHA256HashAsString;
- (id)gckb_SHA256Hash;
- (id)gckb_SHA1HashAsString;
- (id)gckb_SHA1Hash;
- (id)gckb_UTF8String;
- (id)gckb_hexString;
- (id)gckb_base64EncodedString;
@end

