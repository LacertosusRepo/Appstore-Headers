//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol HUBComponentImageDataJSONSchema, HUBJSONDictionaryPath, HUBJSONStringPath, HUBJSONURLPath;

@protocol HUBComponentImageDataJSONSchema
@property(retain, nonatomic) id <HUBJSONDictionaryPath> customDataPath;
@property(retain, nonatomic) id <HUBJSONStringPath> localImageNamePath;
@property(retain, nonatomic) id <HUBJSONStringPath> placeholderIconIdentifierPath;
@property(retain, nonatomic) id <HUBJSONURLPath> URLPath;
- (id <HUBComponentImageDataJSONSchema>)copy;
@end
