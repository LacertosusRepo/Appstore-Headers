//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MMKHeader, MMKMessage;

@interface MMKMessageEnvelope : NSObject
{
    _Bool _encrypted;
    MMKHeader *_header;
    MMKMessage *_message;
}

@property(readonly, nonatomic) _Bool encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, nonatomic) MMKMessage *message; // @synthesize message=_message;
@property(readonly, nonatomic) MMKHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithHeader:(id)arg1 message:(id)arg2 encrypted:(_Bool)arg3;

@end

