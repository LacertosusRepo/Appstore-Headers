//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBComponentModelBuilder.h"
#import "HUBComponentModelBuilderDelegate.h"
#import "NSCopying.h"

@class HUBComponentDefaults, HUBComponentImageDataBuilderImplementation, HUBComponentTargetBuilderImplementation, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSURL, UIImage;

@interface HUBComponentModelBuilderImplementation : NSObject <HUBComponentModelBuilderDelegate, HUBComponentModelBuilder, NSCopying>
{
    id <HUBComponentModelBuilderDelegate> _delegate;
    NSString *_modelIdentifier;
    NSNumber *_preferredIndex;
    NSString *_groupIdentifier;
    NSString *_componentNamespace;
    NSString *_componentName;
    NSString *_componentCategory;
    NSString *_title;
    NSString *_subtitle;
    NSString *_accessoryTitle;
    NSString *_descriptionText;
    NSString *_iconIdentifier;
    NSDictionary *_metadata;
    NSDictionary *_loggingData;
    NSDictionary *_customData;
    unsigned long long _type;
    id <HUBJSONSchema> _JSONSchema;
    HUBComponentDefaults *_componentDefaults;
    id <HUBIconImageResolver> _iconImageResolver;
    HUBComponentImageDataBuilderImplementation *_mainImageDataBuilderImplementation;
    HUBComponentImageDataBuilderImplementation *_backgroundImageDataBuilderImplementation;
    NSMutableDictionary *_customImageDataBuilders;
    HUBComponentTargetBuilderImplementation *_targetBuilderImplementation;
    NSMutableDictionary *_childBuilders;
    NSMutableArray *_childIdentifierOrder;
    NSMutableDictionary *_childBuildersByGroupIdentifier;
}

+ (id)buildComponentModelsUsingBuilders:(id)arg1 identifierOrder:(id)arg2 parent:(id)arg3;
@property(readonly, nonatomic) NSMutableDictionary *childBuildersByGroupIdentifier; // @synthesize childBuildersByGroupIdentifier=_childBuildersByGroupIdentifier;
@property(readonly, nonatomic) NSMutableArray *childIdentifierOrder; // @synthesize childIdentifierOrder=_childIdentifierOrder;
@property(readonly, nonatomic) NSMutableDictionary *childBuilders; // @synthesize childBuilders=_childBuilders;
@property(retain, nonatomic) HUBComponentTargetBuilderImplementation *targetBuilderImplementation; // @synthesize targetBuilderImplementation=_targetBuilderImplementation;
@property(readonly, nonatomic) NSMutableDictionary *customImageDataBuilders; // @synthesize customImageDataBuilders=_customImageDataBuilders;
@property(readonly, nonatomic) HUBComponentImageDataBuilderImplementation *backgroundImageDataBuilderImplementation; // @synthesize backgroundImageDataBuilderImplementation=_backgroundImageDataBuilderImplementation;
@property(readonly, nonatomic) HUBComponentImageDataBuilderImplementation *mainImageDataBuilderImplementation; // @synthesize mainImageDataBuilderImplementation=_mainImageDataBuilderImplementation;
@property(readonly, nonatomic) id <HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) id <HUBJSONSchema> JSONSchema; // @synthesize JSONSchema=_JSONSchema;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *customData; // @synthesize customData=_customData;
@property(retain, nonatomic) NSDictionary *loggingData; // @synthesize loggingData=_loggingData;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *iconIdentifier; // @synthesize iconIdentifier=_iconIdentifier;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *accessoryTitle; // @synthesize accessoryTitle=_accessoryTitle;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *componentCategory; // @synthesize componentCategory=_componentCategory;
@property(copy, nonatomic) NSString *componentName; // @synthesize componentName=_componentName;
@property(copy, nonatomic) NSString *componentNamespace; // @synthesize componentNamespace=_componentNamespace;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(copy, nonatomic) NSNumber *preferredIndex; // @synthesize preferredIndex=_preferredIndex;
@property(readonly, copy, nonatomic) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property(nonatomic) __weak id <HUBComponentModelBuilderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)componentModelBuilder:(id)arg1 groupIdentifierDidChange:(id)arg2 oldGroupIdentifier:(id)arg3;
- (id)buildIconForPlaceholder:(_Bool)arg1;
- (id)getOrCreateBuilderForChildWithIdentifier:(id)arg1;
- (id)getOrCreateBuilderForCustomImageDataWithIdentifier:(id)arg1;
- (id)getOrCreateTargetBuilder;
- (id)buildForIndex:(unsigned long long)arg1 parent:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)addJSONDictionary:(id)arg1;
- (_Bool)addJSONData:(id)arg1 error:(id *)arg2;
- (void)removeAllChildBuilders;
- (void)removeBuilderForChildWithIdentifier:(id)arg1;
- (id)buildersForChildrenInGroupWithIdentifier:(id)arg1;
- (id)builderForChildWithIdentifier:(id)arg1;
- (_Bool)builderExistsForChildWithIdentifier:(id)arg1;
- (id)allChildBuilders;
- (id)builderForCustomImageDataWithIdentifier:(id)arg1;
- (_Bool)builderExistsForCustomImageDataWithIdentifier:(id)arg1;
@property(retain, nonatomic) UIImage *backgroundImage;
@property(copy, nonatomic) NSURL *backgroundImageURL;
@property(readonly, nonatomic) id <HUBComponentTargetBuilder> targetBuilder;
@property(readonly, nonatomic) id <HUBComponentImageDataBuilder> backgroundImageDataBuilder;
@property(retain, nonatomic) UIImage *mainImage;
@property(copy, nonatomic) NSURL *mainImageURL;
@property(readonly, nonatomic) id <HUBComponentImageDataBuilder> mainImageDataBuilder;
- (id)initWithModelIdentifier:(id)arg1 type:(unsigned long long)arg2 JSONSchema:(id)arg3 componentDefaults:(id)arg4 iconImageResolver:(id)arg5 mainImageDataBuilder:(id)arg6 backgroundImageDataBuilder:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

