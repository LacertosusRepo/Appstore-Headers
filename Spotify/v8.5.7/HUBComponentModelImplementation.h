//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUBAutoEquatable.h"

#import "HUBComponentModel-Protocol.h"

@class HUBIdentifier, NSArray, NSDictionary, NSIndexPath, NSString;
@protocol HUBComponentImageData, HUBComponentModel, HUBComponentTarget, HUBIcon;

@interface HUBComponentModelImplementation : HUBAutoEquatable <HUBComponentModel>
{
    NSString *_identifier;
    unsigned long long _type;
    unsigned long long _index;
    NSString *_groupIdentifier;
    HUBIdentifier *_componentIdentifier;
    NSString *_componentCategory;
    NSString *_title;
    NSString *_subtitle;
    NSString *_accessoryTitle;
    NSString *_descriptionText;
    id <HUBComponentImageData> _mainImageData;
    id <HUBComponentImageData> _backgroundImageData;
    NSDictionary *_customImageData;
    id <HUBIcon> _icon;
    id <HUBComponentTarget> _target;
    NSDictionary *_metadata;
    NSDictionary *_loggingData;
    NSDictionary *_customData;
    id <HUBComponentModel> _parent;
    NSArray *_children;
    NSDictionary *_childIdentifierToIndexMap;
    NSDictionary *_childrenByGroupIdentifier;
}

+ (id)ignoredAutoEquatablePropertyNames;
@property(retain, nonatomic) NSDictionary *childrenByGroupIdentifier; // @synthesize childrenByGroupIdentifier=_childrenByGroupIdentifier;
@property(retain, nonatomic) NSDictionary *childIdentifierToIndexMap; // @synthesize childIdentifierToIndexMap=_childIdentifierToIndexMap;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) __weak id <HUBComponentModel> parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) NSDictionary *customData; // @synthesize customData=_customData;
@property(readonly, nonatomic) NSDictionary *loggingData; // @synthesize loggingData=_loggingData;
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) id <HUBComponentTarget> target; // @synthesize target=_target;
@property(readonly, nonatomic) id <HUBIcon> icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSDictionary *customImageData; // @synthesize customImageData=_customImageData;
@property(readonly, nonatomic) id <HUBComponentImageData> backgroundImageData; // @synthesize backgroundImageData=_backgroundImageData;
@property(readonly, nonatomic) id <HUBComponentImageData> mainImageData; // @synthesize mainImageData=_mainImageData;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *accessoryTitle; // @synthesize accessoryTitle=_accessoryTitle;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *componentCategory; // @synthesize componentCategory=_componentCategory;
@property(readonly, copy, nonatomic) HUBIdentifier *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
@property(readonly, copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)serializedChildren;
- (id)serializedImageData;
- (id)serializedTextData;
- (id)serializedComponentData;
- (id)childrenInGroupWithIdentifier:(id)arg1;
- (id)childWithIdentifier:(id)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSIndexPath *indexPath;
- (id)serialize;
@property(readonly, copy) NSString *debugDescription;
- (id)valueForKey:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3 groupIdentifier:(id)arg4 componentIdentifier:(id)arg5 componentCategory:(id)arg6 title:(id)arg7 subtitle:(id)arg8 accessoryTitle:(id)arg9 descriptionText:(id)arg10 mainImageData:(id)arg11 backgroundImageData:(id)arg12 customImageData:(id)arg13 icon:(id)arg14 target:(id)arg15 metadata:(id)arg16 loggingData:(id)arg17 customData:(id)arg18 parent:(id)arg19;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

