//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MSCBasePacket.h"

@class MSCRpcCallParameterList, NSString;

@interface MSCPacketRPCCall : MSCBasePacket
{
    unsigned int _referenceId;
    NSString *_functionName;
    NSString *_returnType;
    MSCRpcCallParameterList *_parameters;
}

@property(retain) MSCRpcCallParameterList *parameters; // @synthesize parameters=_parameters;
@property(retain) NSString *returnType; // @synthesize returnType=_returnType;
@property(retain) NSString *functionName; // @synthesize functionName=_functionName;
@property unsigned int referenceId; // @synthesize referenceId=_referenceId;
- (void).cxx_destruct;

@end

