//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTIADialogCommand.h"

#import "YTAppElementsCommandHandler.h"

@class NSString;

@interface YTIADialogCommand (YTAppElementsCommandHandler) <YTAppElementsCommandHandler>
- (void)executeCommand:(id)arg1 withContext:(id)arg2 sender:(id)arg3 recognizer:(id)arg4 result:(CDUnknownBlockType)arg5;
- (void)maybePerformCancelCommandWithContext:(id)arg1 sender:(id)arg2 recognizer:(id)arg3 result:(CDUnknownBlockType)arg4;
- (void)maybePerformActionCommandWithContext:(id)arg1 sender:(id)arg2 recognizer:(id)arg3 result:(CDUnknownBlockType)arg4;
- (id)executeWithContext:(id)arg1 sender:(id)arg2 recognizer:(id)arg3 gimme:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

