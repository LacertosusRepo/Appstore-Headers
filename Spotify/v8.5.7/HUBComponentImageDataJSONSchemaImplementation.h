//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponentImageDataJSONSchema-Protocol.h"

@protocol HUBJSONDictionaryPath, HUBJSONStringPath, HUBJSONURLPath;

@interface HUBComponentImageDataJSONSchemaImplementation : NSObject <HUBComponentImageDataJSONSchema>
{
    id <HUBJSONURLPath> _URLPath;
    id <HUBJSONStringPath> _placeholderIconIdentifierPath;
    id <HUBJSONStringPath> _localImageNamePath;
    id <HUBJSONDictionaryPath> _customDataPath;
}

@property(retain, nonatomic) id <HUBJSONDictionaryPath> customDataPath; // @synthesize customDataPath=_customDataPath;
@property(retain, nonatomic) id <HUBJSONStringPath> localImageNamePath; // @synthesize localImageNamePath=_localImageNamePath;
@property(retain, nonatomic) id <HUBJSONStringPath> placeholderIconIdentifierPath; // @synthesize placeholderIconIdentifierPath=_placeholderIconIdentifierPath;
@property(retain, nonatomic) id <HUBJSONURLPath> URLPath; // @synthesize URLPath=_URLPath;
- (void).cxx_destruct;
- (id)copy;
- (id)initWithURLPath:(id)arg1 placeholderIconIdentifierPath:(id)arg2 localImageNamePath:(id)arg3 customDataPath:(id)arg4;
- (id)init;

@end
