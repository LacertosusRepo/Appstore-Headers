//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GNSDSSSEncoding, GNSDTMFEncoding;

@interface GNSTokenListenerParams : NSObject
{
    GNSDSSSEncoding *_dsssEncoding;
    GNSDTMFEncoding *_dtmfEncoding;
}

@property(retain, nonatomic) GNSDTMFEncoding *dtmfEncoding; // @synthesize dtmfEncoding=_dtmfEncoding;
@property(retain, nonatomic) GNSDSSSEncoding *dsssEncoding; // @synthesize dsssEncoding=_dsssEncoding;
- (void).cxx_destruct;

@end

