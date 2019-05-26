//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponentModelJSONSchema-Protocol.h"

@protocol HUBJSONDictionaryPath, HUBJSONStringPath;

@interface HUBComponentModelJSONSchemaImplementation : NSObject <HUBComponentModelJSONSchema>
{
    id <HUBJSONStringPath> _identifierPath;
    id <HUBJSONStringPath> _groupIdentifierPath;
    id <HUBJSONStringPath> _componentIdentifierPath;
    id <HUBJSONStringPath> _componentCategoryPath;
    id <HUBJSONStringPath> _titlePath;
    id <HUBJSONStringPath> _subtitlePath;
    id <HUBJSONStringPath> _accessoryTitlePath;
    id <HUBJSONStringPath> _descriptionTextPath;
    id <HUBJSONDictionaryPath> _mainImageDataDictionaryPath;
    id <HUBJSONDictionaryPath> _backgroundImageDataDictionaryPath;
    id <HUBJSONDictionaryPath> _customImageDataDictionaryPath;
    id <HUBJSONStringPath> _iconIdentifierPath;
    id <HUBJSONDictionaryPath> _targetDictionaryPath;
    id <HUBJSONDictionaryPath> _metadataPath;
    id <HUBJSONDictionaryPath> _loggingDataPath;
    id <HUBJSONDictionaryPath> _customDataPath;
    id <HUBJSONDictionaryPath> _childDictionariesPath;
}

@property(retain, nonatomic) id <HUBJSONDictionaryPath> childDictionariesPath; // @synthesize childDictionariesPath=_childDictionariesPath;
@property(retain, nonatomic) id <HUBJSONDictionaryPath> customDataPath; // @synthesize customDataPath=_customDataPath;
@property(retain, nonatomic) id <HUBJSONDictionaryPath> loggingDataPath; // @synthesize loggingDataPath=_loggingDataPath;
@property(retain, nonatomic) id <HUBJSONDictionaryPath> metadataPath; // @synthesize metadataPath=_metadataPath;
@property(retain, nonatomic) id <HUBJSONDictionaryPath> targetDictionaryPath; // @synthesize targetDictionaryPath=_targetDictionaryPath;
@property(retain, nonatomic) id <HUBJSONStringPath> iconIdentifierPath; // @synthesize iconIdentifierPath=_iconIdentifierPath;
@property(retain, nonatomic) id <HUBJSONDictionaryPath> customImageDataDictionaryPath; // @synthesize customImageDataDictionaryPath=_customImageDataDictionaryPath;
@property(retain, nonatomic) id <HUBJSONDictionaryPath> backgroundImageDataDictionaryPath; // @synthesize backgroundImageDataDictionaryPath=_backgroundImageDataDictionaryPath;
@property(retain, nonatomic) id <HUBJSONDictionaryPath> mainImageDataDictionaryPath; // @synthesize mainImageDataDictionaryPath=_mainImageDataDictionaryPath;
@property(retain, nonatomic) id <HUBJSONStringPath> descriptionTextPath; // @synthesize descriptionTextPath=_descriptionTextPath;
@property(retain, nonatomic) id <HUBJSONStringPath> accessoryTitlePath; // @synthesize accessoryTitlePath=_accessoryTitlePath;
@property(retain, nonatomic) id <HUBJSONStringPath> subtitlePath; // @synthesize subtitlePath=_subtitlePath;
@property(retain, nonatomic) id <HUBJSONStringPath> titlePath; // @synthesize titlePath=_titlePath;
@property(retain, nonatomic) id <HUBJSONStringPath> componentCategoryPath; // @synthesize componentCategoryPath=_componentCategoryPath;
@property(retain, nonatomic) id <HUBJSONStringPath> componentIdentifierPath; // @synthesize componentIdentifierPath=_componentIdentifierPath;
@property(retain, nonatomic) id <HUBJSONStringPath> groupIdentifierPath; // @synthesize groupIdentifierPath=_groupIdentifierPath;
@property(retain, nonatomic) id <HUBJSONStringPath> identifierPath; // @synthesize identifierPath=_identifierPath;
- (void).cxx_destruct;
- (id)copy;
- (id)initWithIdentifierPath:(id)arg1 groupIdentifierPath:(id)arg2 componentIdentifierPath:(id)arg3 componentCategoryPath:(id)arg4 titlePath:(id)arg5 subtitlePath:(id)arg6 accessoryTitlePath:(id)arg7 descriptionTextPath:(id)arg8 mainImageDataDictionaryPath:(id)arg9 backgroundImageDataDictionaryPath:(id)arg10 customImageDataDictionaryPath:(id)arg11 iconIdentifierPath:(id)arg12 targetDictionaryPath:(id)arg13 metadataPath:(id)arg14 loggingDataPath:(id)arg15 customDataPath:(id)arg16 childDictionariesPath:(id)arg17;
- (id)init;

@end
