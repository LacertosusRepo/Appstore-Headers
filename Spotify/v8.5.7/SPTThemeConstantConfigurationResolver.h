//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTThemeConfigurationResolver-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSSet, NSString, SPTReaderWriterMutableDictionary;

@interface SPTThemeConstantConfigurationResolver : NSObject <SPTThemeConfigurationResolver>
{
    SPTReaderWriterMutableDictionary *_flags;
    NSSet *_suffixes;
    NSSet *_fileNames;
    NSDictionary *_mergedConfigurations;
    NSMutableDictionary *_keysToAliases;
}

@property(readonly, nonatomic) NSMutableDictionary *keysToAliases; // @synthesize keysToAliases=_keysToAliases;
@property(readonly, nonatomic) NSDictionary *mergedConfigurations; // @synthesize mergedConfigurations=_mergedConfigurations;
@property(readonly, nonatomic) NSSet *fileNames; // @synthesize fileNames=_fileNames;
@property(readonly, nonatomic) NSSet *suffixes; // @synthesize suffixes=_suffixes;
- (void).cxx_destruct;
- (id)dependentKeysOfKeys:(id)arg1;
- (id)configurationValueForKey:(id)arg1 reportErrors:(_Bool)arg2;
@property(readonly, nonatomic) NSDictionary *configuration;
@property(readonly, nonatomic) __weak NSDictionary *flags;
- (id)setFlag:(id)arg1 enabled:(_Bool)arg2 priority:(unsigned long long)arg3;
- (id)registerConfigurationDictionary:(id)arg1 overridingCurrentValues:(_Bool)arg2;
- (id)registerConfigurationFromFileNamed:(id)arg1 inBundle:(id)arg2;
- (id)initWithFileNames:(id)arg1 mergedConfigurations:(id)arg2 suffixes:(id)arg3;
- (id)initWithSuffixes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

