//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol MMKCipher <NSObject>
- (NSData *)decrypt:(NSData *)arg1 key:(unsigned int)arg2;
- (NSData *)encrypt:(NSData *)arg1 key:(unsigned int)arg2;
@end

