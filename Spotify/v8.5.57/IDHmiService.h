//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IDService.h"

@class NSDictionary, NSMutableSet;
@protocol IDHmiServiceDelegate;

@interface IDHmiService : IDService
{
    NSDictionary *_hmiCapabilities;
    NSMutableSet *_hmiEventObservers;
    NSMutableSet *_actionEventObservers;
    id <IDHmiServiceDelegate> _delegate;
}

@property __weak id <IDHmiServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSMutableSet *actionEventObservers; // @synthesize actionEventObservers=_actionEventObservers;
@property(readonly) NSMutableSet *hmiEventObservers; // @synthesize hmiEventObservers=_hmiEventObservers;
@property(readonly) NSDictionary *hmiCapabilities; // @synthesize hmiCapabilities=_hmiCapabilities;
- (void).cxx_destruct;
- (void)confirmActionEvent:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)session:(id)arg1 hmiService:(long long)arg2 handleHmiEvent:(unsigned long long)arg3 component:(unsigned long long)arg4 info:(id)arg5;
- (void)session:(id)arg1 hmiService:(long long)arg2 handleActionEvent:(unsigned long long)arg3 info:(id)arg4;
- (void)setComponent:(long long)arg1 visible:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)triggerHmiEvent:(unsigned long long)arg1 parameterMap:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)triggerHmiEvent:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setProperty:(unsigned long long)arg1 forComponent:(long long)arg2 variantMap:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setListModel:(long long)arg1 tableData:(id)arg2 fromRow:(unsigned long long)arg3 rows:(unsigned long long)arg4 fromColumn:(unsigned long long)arg5 columns:(unsigned long long)arg6 totalRows:(unsigned long long)arg7 totalColumns:(unsigned long long)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (void)setListModel:(long long)arg1 tableData:(id)arg2 fromRow:(unsigned long long)arg3 rows:(unsigned long long)arg4 fromColumn:(unsigned long long)arg5 columns:(unsigned long long)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)setListModel:(long long)arg1 tableData:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setDataModel:(long long)arg1 variantData:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeHandlerForActionEvent:(unsigned long long)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)removeAllActionEventHandlersForTarget:(id)arg1;
- (void)removeHandlerForHmiEvent:(long long)arg1 component:(unsigned long long)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)removeAllHmiEventHandlersForTarget:(id)arg1;
- (void)addHandlerForActionEvent:(unsigned long long)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)addHandlerForHmiEvent:(long long)arg1 component:(unsigned long long)arg2 target:(id)arg3 selector:(SEL)arg4;
- (id)uploadResourceToHmi:(id)arg1;
- (_Bool)startWithHmiDescription:(id)arg1 textDatabases:(id)arg2 imageDatabases:(id)arg3 widgetDatabase:(id)arg4 error:(id *)arg5;
- (_Bool)startWithHmiDescription:(id)arg1 textDatabases:(id)arg2 imageDatabases:(id)arg3 error:(id *)arg4;
- (id)initWithEtchSession:(id)arg1 handle:(long long)arg2 hmiCapabilities:(id)arg3;

@end

