//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, WrappedSenderKey;

@interface GCKBroadcastKeyPair : NSObject
{
    NSData *_senderKey;
    WrappedSenderKey *_wrappedSenderKey;
}

@property(readonly, nonatomic) WrappedSenderKey *wrappedSenderKey; // @synthesize wrappedSenderKey=_wrappedSenderKey;
@property(readonly, nonatomic) NSData *senderKey; // @synthesize senderKey=_senderKey;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)initWithSenderKey:(id)arg1 wrappedSenderKey:(id)arg2;

@end

