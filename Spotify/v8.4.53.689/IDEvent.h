//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDFlushable.h"
#import "IDHmiServiceLifecycleProtocol.h"

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

