//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBCommandHandler.h"

@class NSArray;

@interface EXP_SPTHubComposableCommandHandler : NSObject <EXP_HUBCommandHandler>
{
    NSArray *_commandHandlers;
}

@property(readonly, copy, nonatomic) NSArray *commandHandlers; // @synthesize commandHandlers=_commandHandlers;
- (void).cxx_destruct;
- (_Bool)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithCommandHandlers:(id)arg1;

@end

