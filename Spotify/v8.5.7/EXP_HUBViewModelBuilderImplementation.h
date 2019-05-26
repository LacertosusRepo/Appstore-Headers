//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBViewModelBuilder-Protocol.h"
#import "NSCopying-Protocol.h"

@class EXP_HUBComponentDefaults, EXP_HUBComponentModelBuilderImplementation, NSMutableArray, NSMutableDictionary, NSString;
@protocol EXP_HUBComponentModelBuilder, EXP_HUBIconImageResolver;

@interface EXP_HUBViewModelBuilderImplementation : NSObject <EXP_HUBViewModelBuilder, NSCopying>
{
    NSString *_viewIdentifier;
    NSString *_navigationBarTitle;
    NSMutableDictionary *_customData;
    EXP_HUBComponentDefaults *_componentDefaults;
    id <EXP_HUBIconImageResolver> _iconImageResolver;
    EXP_HUBComponentModelBuilderImplementation *_headerComponentModelBuilderImplementation;
    NSMutableDictionary *_bodyComponentModelBuilders;
    NSMutableDictionary *_overlayComponentModelBuilders;
    NSMutableArray *_bodyComponentIdentifierOrder;
    NSMutableArray *_overlayComponentIdentifierOrder;
}

@property(readonly, nonatomic) NSMutableArray *overlayComponentIdentifierOrder; // @synthesize overlayComponentIdentifierOrder=_overlayComponentIdentifierOrder;
@property(readonly, nonatomic) NSMutableArray *bodyComponentIdentifierOrder; // @synthesize bodyComponentIdentifierOrder=_bodyComponentIdentifierOrder;
@property(readonly, nonatomic) NSMutableDictionary *overlayComponentModelBuilders; // @synthesize overlayComponentModelBuilders=_overlayComponentModelBuilders;
@property(readonly, nonatomic) NSMutableDictionary *bodyComponentModelBuilders; // @synthesize bodyComponentModelBuilders=_bodyComponentModelBuilders;
@property(retain, nonatomic) EXP_HUBComponentModelBuilderImplementation *headerComponentModelBuilderImplementation; // @synthesize headerComponentModelBuilderImplementation=_headerComponentModelBuilderImplementation;
@property(readonly, nonatomic) id <EXP_HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) EXP_HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) NSMutableDictionary *customData; // @synthesize customData=_customData;
@property(copy, nonatomic) NSString *navigationBarTitle; // @synthesize navigationBarTitle=_navigationBarTitle;
@property(copy, nonatomic) NSString *viewIdentifier; // @synthesize viewIdentifier=_viewIdentifier;
- (void).cxx_destruct;
- (_Bool)enumerateComponentModelBuilders:(id)arg1 identifierOrder:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (_Bool)enumerateOverlayComponentModelBuildersWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)enumerateBodyComponentModelBuildersWithBlock:(CDUnknownBlockType)arg1;
- (id)createComponentModelBuilderWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)existingComponentModelBuilderFromDictionary:(id)arg1 modelIdentifier:(id)arg2;
- (id)getOrCreateBuilderForOverlayComponentModelWithIdentifier:(id)arg1;
- (id)getOrCreateBuilderForBodyComponentModelWithIdentifier:(id)arg1;
- (id)getOrCreateBuilderForHeaderComponentModelWithIdentifier:(id)arg1;
- (void)addDataFromBodyComponentModelJSONDictionary:(id)arg1;
- (void)addDataFromJSONArray:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (void)addJSONDictionary:(id)arg1;
- (_Bool)addJSONData:(id)arg1 error:(id *)arg2;
- (id)build;
- (void)appendOverlayComponentModelBuilder:(id)arg1;
- (void)appendBodyComponentModelBuilder:(id)arg1;
- (void)replaceHeaderComponentModelBuilderWithComponentModelBuilder:(id)arg1;
- (void)addViewModelBuilder:(id)arg1;
- (void)removeAllComponentModelBuilders;
- (void)removeBuilderForOverlayComponentModelWithIdentifier:(id)arg1;
- (void)removeBuilderForBodyComponentModelWithIdentifier:(id)arg1;
- (void)removeHeaderComponentModelBuilder;
- (void)enumerateAllComponentModelBuildersWithBlock:(CDUnknownBlockType)arg1;
- (id)builderForOverlayComponentModelWithIdentifier:(id)arg1;
- (id)builderForBodyComponentModelWithIdentifier:(id)arg1;
- (id)allOverlayComponentModelBuilders;
- (id)allBodyComponentModelBuilders;
- (_Bool)builderExistsForOverlayComponentModelWithIdentifier:(id)arg1;
- (_Bool)builderExistsForBodyComponentModelWithIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool headerComponentModelBuilderExists;
@property(readonly, nonatomic) id <EXP_HUBComponentModelBuilder> headerComponentModelBuilder;
@property(readonly, nonatomic) unsigned long long numberOfOverlayComponentModelBuilders;
@property(readonly, nonatomic) unsigned long long numberOfBodyComponentModelBuilders;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)initWithComponentDefaults:(id)arg1 iconImageResolver:(id)arg2;

@end
