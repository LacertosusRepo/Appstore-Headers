//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandHandler-Protocol.h"

@class NSDictionary;
@protocol HUBCommandHandler;

@interface HUBCommandDispatcher : NSObject <HUBCommandHandler>
{
    NSDictionary *_commandRegister;
    id <HUBCommandHandler> _unmappedCommandHandler;
}

@property(retain, nonatomic) id <HUBCommandHandler> unmappedCommandHandler; // @synthesize unmappedCommandHandler=_unmappedCommandHandler;
@property(copy, nonatomic) NSDictionary *commandRegister; // @synthesize commandRegister=_commandRegister;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithCommandRegister:(id)arg1 unmappedCommandHandler:(id)arg2;

@end

