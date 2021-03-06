//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponentTargetBuilder-Protocol.h"
#import "NSCopying-Protocol.h"

@class HUBComponentDefaults, HUBViewModelBuilderImplementation, NSMutableDictionary, NSMutableOrderedSet, NSURL;
@protocol HUBIconImageResolver, HUBViewModelBuilder;

@interface HUBComponentTargetBuilderImplementation : NSObject <HUBComponentTargetBuilder, NSCopying>
{
    NSURL *_URI;
    NSMutableOrderedSet *_actionIdentifiers;
    NSMutableDictionary *_customData;
    HUBComponentDefaults *_componentDefaults;
    id <HUBIconImageResolver> _iconImageResolver;
    HUBViewModelBuilderImplementation *_initialViewModelBuilderImplementation;
}

@property(retain, nonatomic) HUBViewModelBuilderImplementation *initialViewModelBuilderImplementation; // @synthesize initialViewModelBuilderImplementation=_initialViewModelBuilderImplementation;
@property(readonly, nonatomic) id <HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) NSMutableDictionary *customData; // @synthesize customData=_customData;
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
- (id)initWithComponentDefaults:(id)arg1 iconImageResolver:(id)arg2 actionIdentifiers:(id)arg3;

@end

