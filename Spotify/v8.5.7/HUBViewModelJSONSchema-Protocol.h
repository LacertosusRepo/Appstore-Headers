//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol HUBJSONDictionaryPath, HUBJSONStringPath, HUBViewModelJSONSchema;

@protocol HUBViewModelJSONSchema
@property(retain, nonatomic) id <HUBJSONDictionaryPath> customDataPath;
@property(retain, nonatomic) id <HUBJSONDictionaryPath> overlayComponentModelDictionariesPath;
@property(retain, nonatomic) id <HUBJSONDictionaryPath> bodyComponentModelDictionariesPath;
@property(retain, nonatomic) id <HUBJSONDictionaryPath> headerComponentModelDictionaryPath;
@property(retain, nonatomic) id <HUBJSONStringPath> navigationBarTitlePath;
@property(retain, nonatomic) id <HUBJSONStringPath> identifierPath;
- (id <HUBViewModelJSONSchema>)copy;
@end
