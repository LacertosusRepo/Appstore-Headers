//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BMWEOCLong, NSArray, NSMutableDictionary, NSString;

@interface BMWEOCMessage : NSObject
{
    unsigned int _messageNameHash;
    unsigned int _numberOfParams;
    NSString *_messageName;
    NSMutableDictionary *_parameters;
    BMWEOCLong *_messageId;
    BMWEOCLong *_inReplyTo;
    Class _returnClass;
    NSArray *_exceptions;
    CDUnknownBlockType _returnCompletionHandler;
    CDUnknownBlockType _voidCompletionHandler;
}

@property(copy) CDUnknownBlockType voidCompletionHandler; // @synthesize voidCompletionHandler=_voidCompletionHandler;
@property(copy) CDUnknownBlockType returnCompletionHandler; // @synthesize returnCompletionHandler=_returnCompletionHandler;
@property(retain) NSArray *exceptions; // @synthesize exceptions=_exceptions;
@property(retain) Class returnClass; // @synthesize returnClass=_returnClass;
@property(retain) BMWEOCLong *inReplyTo; // @synthesize inReplyTo=_inReplyTo;
@property(retain) BMWEOCLong *messageId; // @synthesize messageId=_messageId;
@property(retain) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
@property unsigned int numberOfParams; // @synthesize numberOfParams=_numberOfParams;
@property unsigned int messageNameHash; // @synthesize messageNameHash=_messageNameHash;
@property(retain) NSString *messageName; // @synthesize messageName=_messageName;
- (void).cxx_destruct;
- (id)description;
- (id)exception;
- (id)resultNameForName:(id)arg1;
- (id)getCustomForName:(id)arg1 customClass:(Class)arg2 error:(id *)arg3;
- (id)getObjectForName:(id)arg1 nativeClass:(Class)arg2 error:(id *)arg3;
- (id)createResultWithHashLookup:(id)arg1;
- (id)init;

@end
