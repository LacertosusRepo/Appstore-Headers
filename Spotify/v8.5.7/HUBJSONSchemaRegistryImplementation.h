//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBJSONSchemaRegistry-Protocol.h"

@class NSMutableDictionary;
@protocol HUBJSONSchema;

@interface HUBJSONSchemaRegistryImplementation : NSObject <HUBJSONSchemaRegistry>
{
    id <HUBJSONSchema> _defaultSchema;
    NSMutableDictionary *_customSchemasByIdentifier;
}

@property(readonly, nonatomic) NSMutableDictionary *customSchemasByIdentifier; // @synthesize customSchemasByIdentifier=_customSchemasByIdentifier;
@property(readonly, nonatomic) id <HUBJSONSchema> defaultSchema; // @synthesize defaultSchema=_defaultSchema;
- (void).cxx_destruct;
- (void)unregisterCustomSchemaWithIdentifier:(id)arg1;
- (void)registerCustomSchema:(id)arg1 forIdentifier:(id)arg2;
- (id)copySchemaWithIdentifier:(id)arg1;
- (id)createNewSchema;
- (id)customSchemaForIdentifier:(id)arg1;
- (id)initWithComponentDefaults:(id)arg1 iconImageResolver:(id)arg2;

@end
