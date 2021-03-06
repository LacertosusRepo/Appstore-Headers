//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDFlushable-Protocol.h"
#import "IDHmiServiceLifecycleProtocol-Protocol.h"

@class IDModel, NSString;
@protocol IDHmiActionDelegate;

@interface IDHmiAction : NSObject <IDHmiServiceLifecycleProtocol, IDFlushable>
{
    long long _identifier;
    IDModel *_model;
    id <IDHmiActionDelegate> _delegate;
}

+ (id)invalidHmiAction;
+ (id)new;
@property __weak id <IDHmiActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IDModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (void)handleHmiAction:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithActionId:(long long)arg1 model:(id)arg2;
- (id)initWithActionId:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

