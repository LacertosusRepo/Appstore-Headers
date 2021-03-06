//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDVariantData, IDWidgetHmiService;

@interface IDModel : NSObject
{
    _Bool _dirty;
    _Bool _implicit;
    long long _identifier;
    unsigned long long _type;
    long long _reference;
    IDVariantData *_value;
    IDWidgetHmiService *_widgetHmiService;
}

+ (id)modelWithId:(long long)arg1 type:(unsigned long long)arg2 reference:(long long)arg3;
+ (id)modelWithId:(long long)arg1 type:(unsigned long long)arg2 value:(id)arg3;
+ (id)invalidModel;
+ (id)new;
+ (id)modelWithId:(long long)arg1 type:(unsigned long long)arg2 implicit:(_Bool)arg3;
@property __weak IDWidgetHmiService *widgetHmiService; // @synthesize widgetHmiService=_widgetHmiService;
@property(copy, nonatomic) IDVariantData *value; // @synthesize value=_value;
@property(nonatomic) long long reference; // @synthesize reference=_reference;
@property(readonly) _Bool implicit; // @synthesize implicit=_implicit;
@property unsigned long long type; // @synthesize type=_type;
@property long long identifier; // @synthesize identifier=_identifier;
@property(getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
- (void).cxx_destruct;
- (id)stringWithModelType:(unsigned long long)arg1;
- (id)variantData;
- (void)replaceIntegerTypeWithTargetIdType;
- (void)replaceUnknownTypeWithDataType;
- (void)replaceDataTypeWithImageDataType;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)flushVariantData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)description;
- (_Bool)isValidModel;
- (_Bool)isValueModel;
- (_Bool)isReferenceModel;
- (_Bool)isTargetModel;
- (_Bool)updateReference:(long long)arg1;
- (_Bool)updateValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithId:(long long)arg1 type:(unsigned long long)arg2 reference:(long long)arg3 value:(id)arg4 implicit:(_Bool)arg5;
- (id)initWithId:(long long)arg1 type:(unsigned long long)arg2 implicit:(_Bool)arg3;

@end

