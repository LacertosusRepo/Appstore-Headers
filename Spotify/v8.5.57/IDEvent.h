//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDFlushable-Protocol.h"
#import "IDHmiServiceLifecycleProtocol-Protocol.h"

@class IDVariantMap, IDWidgetHmiService, NSString;

@interface IDEvent : NSObject <IDHmiServiceLifecycleProtocol, IDFlushable>
{
    long long _identifier;
    IDVariantMap *_map;
    IDWidgetHmiService *_widgetHmiService;
}

+ (id)new;
@property __weak IDWidgetHmiService *widgetHmiService; // @synthesize widgetHmiService=_widgetHmiService;
@property(retain, nonatomic) IDVariantMap *map; // @synthesize map=_map;
@property long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithEventId:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

