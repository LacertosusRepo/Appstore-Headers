//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GNSDSSSEncoding, GNSDTMFEncoding, NSData;

@interface GNSTokenBroadcasterParams : NSObject
{
    float _volume;
    NSData *_token;
    GNSDSSSEncoding *_dsssEncoding;
    GNSDTMFEncoding *_dtmfEncoding;
}

@property(retain, nonatomic) GNSDTMFEncoding *dtmfEncoding; // @synthesize dtmfEncoding=_dtmfEncoding;
@property(retain, nonatomic) GNSDSSSEncoding *dsssEncoding; // @synthesize dsssEncoding=_dsssEncoding;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(copy, nonatomic) NSData *token; // @synthesize token=_token;
- (void).cxx_destruct;

@end

