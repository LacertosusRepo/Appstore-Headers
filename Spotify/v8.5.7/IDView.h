//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDFocusable-Protocol.h"
#import "IDHmiEventDelegate-Protocol.h"
#import "IDHmiServiceLifecycleProtocol-Protocol.h"

@class IDApplication, IDEvent, IDHmiEvent, IDModel, NSLock, NSMutableSet, NSString;
@protocol IDViewDelegate;

@interface IDView : NSObject <IDHmiServiceLifecycleProtocol, IDHmiEventDelegate, IDFocusable>
{
    _Bool _focused;
    _Bool _visible;
    id <IDViewDelegate> _delegate;
    IDApplication *_application;
    NSMutableSet *_widgets;
    NSLock *_widgetsLock;
    NSMutableSet *_optionWidgets;
    NSLock *_optionWidgetsLock;
    IDHmiEvent *_visibleHmiEvent;
    long long _hmiState;
    IDModel *_titleModel;
    IDEvent *_focusEvent;
    IDHmiEvent *_focusHmiEvent;
}

+ (id)new;
@property(readonly, nonatomic) IDHmiEvent *focusHmiEvent; // @synthesize focusHmiEvent=_focusHmiEvent;
@property(readonly, nonatomic) IDEvent *focusEvent; // @synthesize focusEvent=_focusEvent;
@property(readonly, nonatomic) IDModel *titleModel; // @synthesize titleModel=_titleModel;
@property(readonly, nonatomic) long long hmiState; // @synthesize hmiState=_hmiState;
@property(readonly, nonatomic) IDHmiEvent *visibleHmiEvent; // @synthesize visibleHmiEvent=_visibleHmiEvent;
@property(readonly, nonatomic) NSLock *optionWidgetsLock; // @synthesize optionWidgetsLock=_optionWidgetsLock;
@property(readonly, nonatomic) NSMutableSet *optionWidgets; // @synthesize optionWidgets=_optionWidgets;
@property(readonly, nonatomic) NSLock *widgetsLock; // @synthesize widgetsLock=_widgetsLock;
@property(readonly, nonatomic) NSMutableSet *widgets; // @synthesize widgets=_widgets;
@property(nonatomic) __weak IDApplication *application; // @synthesize application=_application;
@property(nonatomic) __weak id <IDViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic, getter=isFocused) _Bool focused; // @synthesize focused=_focused;
- (void).cxx_destruct;
- (void)handleVisibilityUpdate:(_Bool)arg1;
- (void)handleFocusUpdate:(_Bool)arg1;
- (void)handleHmiEvent:(id)arg1 info:(id)arg2;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (void)performLastUserMode;
- (void)focus;
- (void)removeOptionWidget:(id)arg1;
- (void)addOptionWidget:(id)arg1;
- (void)removeWidget:(id)arg1;
- (void)addWidget:(id)arg1;
@property(nonatomic) long long titleId;
@property(copy, nonatomic) NSString *title;
- (id)init;
- (id)initWithHmiState:(long long)arg1 titleModelId:(long long)arg2 focusEvent:(long long)arg3;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

