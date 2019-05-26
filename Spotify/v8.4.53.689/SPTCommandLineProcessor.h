//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTDebugLogService, StateController;

@interface SPTCommandLineProcessor : NSObject
{
    SPTDebugLogService *_debugLogService;
    id <SPTLinkDispatcher> _linkDispatcher;
    StateController *_stateController;
}

@property(retain, nonatomic) StateController *stateController; // @synthesize stateController=_stateController;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) SPTDebugLogService *debugLogService; // @synthesize debugLogService=_debugLogService;
- (void).cxx_destruct;
- (void)processCommandLineUrlArgument:(id)arg1;
- (void)processCommandLineArguments:(id)arg1;
- (id)initWithDebugLogService:(id)arg1 linkDispatcher:(id)arg2 stateController:(id)arg3;

@end
