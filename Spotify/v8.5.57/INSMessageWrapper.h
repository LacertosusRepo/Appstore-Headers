//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSMessageProtocol-Protocol.h"

@class NSData, NSString;

@interface INSMessageWrapper : NSObject <INSMessageProtocol>
{
    NSString *_name;
    NSData *_data;
}

+ (id)wrapperWithEnvelope:(id)arg1;
+ (id)wrapperWithMessage:(id)arg1;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

