//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKPB_PBRootObject.h"

#import "GCKPB_PBMutableArrayDelegate-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GCKPB_PBExtensionField, GCKPB_PBFieldDescriptor, GCKPB_PBUnknownFieldSet, NSMutableDictionary, NSString;

@interface GCKPB_PBGeneratedMessage : GCKPB_PBRootObject <GCKPB_PBMutableArrayDelegate, NSCopying, NSMutableCopying, NSSecureCoding>
{
    GCKPB_PBUnknownFieldSet *unknownFields_;
    NSMutableDictionary *extensionMap_;
    NSMutableDictionary *autocreatedExtensionMap_;
    GCKPB_PBGeneratedMessage *autocreator_;
    GCKPB_PBFieldDescriptor *autocreatorField_;
    GCKPB_PBExtensionField *autocreatorExtension_;
    struct PBGeneratedMessage_Storage *messageStorage_;
    int readOnlyMutex_;
}

+ (id)builder;
+ (_Bool)accessInstanceVariablesDirectly;
+ (_Bool)supportsSecureCoding;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (id)parseDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)newMessageWithAutocreator:(id)arg1 extension:(id)arg2;
+ (id)newMessageWithAutocreator:(id)arg1 field:(id)arg2;
+ (id)message;
+ (id)descriptor;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
@property(retain, nonatomic) GCKPB_PBUnknownFieldSet *unknownFields; // @synthesize unknownFields=unknownFields_;
- (id)build;
- (id)builder;
- (void)pbMutableArray:(id)arg1 willAddElements:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)serializedSize;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (_Bool)parseUnknownField:(id)arg1 extensionRegistry:(id)arg2 tag:(unsigned int)arg3;
- (void)parseMessageSet:(id)arg1 extensionRegistry:(id)arg2;
- (void)mergeUnknownFields:(id)arg1;
- (id)mutableUnknownFields;
- (void)mergeDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)mergeFromData:(id)arg1 extensionRegistry:(id)arg2;
- (_Bool)wasAutocreatedBy:(id)arg1;
- (void)clearAutocreator;
- (void)clearExtension:(id)arg1;
- (void)setExtension:(id)arg1 index:(unsigned long long)arg2 value:(id)arg3;
- (void)addExtension:(id)arg1 value:(id)arg2;
- (void)setExtension:(id)arg1 value:(id)arg2;
- (unsigned long long)extensionsSerializedSize;
- (id)sortedExtensionsInUse;
- (void)writeExtensionsToCodedOutputStream:(id)arg1 range:(id)arg2;
- (id)extensionsCurrentlySet;
- (_Bool)hasExtension:(id)arg1;
- (id)getExistingExtension:(id)arg1;
- (id)getExtension:(id)arg1;
- (_Bool)isInitialized:(id)arg1;
- (void)writeField:(id)arg1 toCodedOutputStream:(id)arg2;
- (void)writeDelimitedToCodedOutputStream:(id)arg1;
- (void)writeDelimitedToOutputStream:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1;
- (void)writeToOutputStream:(id)arg1;
- (id)delimitedData;
- (id)data;
- (id)descriptor;
@property(readonly, nonatomic, getter=isInitialized) _Bool initialized;
- (void)internalClear;
- (void)clear;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyFieldsInto:(id)arg1 zone:(struct _NSZone *)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

