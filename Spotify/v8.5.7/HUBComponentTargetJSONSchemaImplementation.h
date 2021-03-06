//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponentTargetJSONSchema-Protocol.h"

@protocol HUBJSONDictionaryPath, HUBJSONStringPath, HUBJSONURLPath;

@interface HUBComponentTargetJSONSchemaImplementation : NSObject <HUBComponentTargetJSONSchema>
{
    id <HUBJSONURLPath> _URIPath;
    id <HUBJSONDictionaryPath> _initialViewModelDictionaryPath;
    id <HUBJSONStringPath> _actionIdentifiersPath;
    id <HUBJSONDictionaryPath> _customDataPath;
}

@property(retain, nonatomic) id <HUBJSONDictionaryPath> customDataPath; // @synthesize customDataPath=_customDataPath;
@property(retain, nonatomic) id <HUBJSONStringPath> actionIdentifiersPath; // @synthesize actionIdentifiersPath=_actionIdentifiersPath;
@property(retain, nonatomic) id <HUBJSONDictionaryPath> initialViewModelDictionaryPath; // @synthesize initialViewModelDictionaryPath=_initialViewModelDictionaryPath;
@property(retain, nonatomic) id <HUBJSONURLPath> URIPath; // @synthesize URIPath=_URIPath;
- (void).cxx_destruct;
- (id)copy;
- (id)initWithURIPath:(id)arg1 initialViewModelDictionaryPath:(id)arg2 actionIdentifiersPath:(id)arg3 customDataPath:(id)arg4;
- (id)init;

@end

