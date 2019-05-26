//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDHmiServiceLifecycleProtocol-Protocol.h"

@class IDProperty, IDView, NSString;

@interface IDWidget : NSObject <IDHmiServiceLifecycleProtocol>
{
    IDProperty *_visibleProperty;
    IDProperty *_enabledProperty;
    IDProperty *_selectableProperty;
    IDView *_view;
    long long _widgetId;
}

+ (id)new;
@property long long widgetId; // @synthesize widgetId=_widgetId;
@property __weak IDView *view; // @synthesize view=_view;
@property(retain, nonatomic) IDProperty *selectableProperty; // @synthesize selectableProperty=_selectableProperty;
@property(retain, nonatomic) IDProperty *enabledProperty; // @synthesize enabledProperty=_enabledProperty;
@property(retain, nonatomic) IDProperty *visibleProperty; // @synthesize visibleProperty=_visibleProperty;
- (void).cxx_destruct;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (void)focus;
@property(nonatomic) _Bool selectable;
@property(nonatomic) _Bool visible;
@property(nonatomic) _Bool enabled;
- (id)init;
- (id)initWithWidgetId:(long long)arg1 model:(id)arg2;
- (id)initWithWidgetId:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

