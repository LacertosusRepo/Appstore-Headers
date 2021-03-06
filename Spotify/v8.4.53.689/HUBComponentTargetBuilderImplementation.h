//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBComponentTargetBuilder.h"
#import "NSCopying.h"

@class HUBComponentDefaults, HUBViewModelBuilderImplementation, NSDictionary, NSMutableOrderedSet, NSURL;

@interface HUBComponentTargetBuilderImplementation : NSObject <HUBComponentTargetBuilder, NSCopying>
{
    NSURL *_URI;
    NSMutableOrderedSet *_actionIdentifiers;
    NSDictionary *_customData;
    id <HUBJSONSchema> _JSONSchema;
    HUBComponentDefaults *_componentDefaults;
    id <HUBIconImageResolver> _iconImageResolver;
    HUBViewModelBuilderImplementation *_initialViewModelBuilderImplementation;
}

@property(retain, nonatomic) HUBViewModelBuilderImplementation *initialViewModelBuilderImplementation; // @synthesize initialViewModelBuilderImplementation=_initialViewModelBuilderImplementation;
@property(readonly, nonatomic) id <HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) id <HUBJSONSchema> JSONSchema; // @synthesize JSONSchema=_JSONSchema;
@property(copy, nonatomic) NSDictionary *customData; // @synthesize customData=_customData;
@property(readonly, nonatomic) NSMutableOrderedSet *actionIdentifiers; // @synthesize actionIdentifiers=_actionIdentifiers;
@property(copy, nonatomic) NSURL *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
- (id)getOrCreateInitialViewModelBuilder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addJSONDictionary:(id)arg1;
- (_Bool)addJSONData:(id)arg1 error:(id *)arg2;
- (void)addActionWithNamespace:(id)arg1 name:(id)arg2;
@property(readonly, nonatomic) id <HUBViewModelBuilder> initialViewModelBuilder;
- (id)build;
- (id)initWithJSONSchema:(id)arg1 componentDefaults:(id)arg2 iconImageResolver:(id)arg3 actionIdentifiers:(id)arg4;

@end

