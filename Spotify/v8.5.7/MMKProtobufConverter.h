//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMKProtobufConverterProtocol-Protocol.h"

@class NSString;

@interface MMKProtobufConverter : NSObject <MMKProtobufConverterProtocol>
{
    int _supportedType;
    Class _supportedMessageClass;
}

@property(readonly, nonatomic) Class supportedMessageClass; // @synthesize supportedMessageClass=_supportedMessageClass;
@property(readonly, nonatomic) int supportedType; // @synthesize supportedType=_supportedType;
- (void).cxx_destruct;
- (id)convertFromProtobuf:(id)arg1;
- (id)convertToProtobuf:(id)arg1;
- (id)parse:(id)arg1 error:(id *)arg2;
- (_Bool)canConvertMMK:(id)arg1;
- (_Bool)canConvertGPB:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

