//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol CollectionFeature <NSObject>
@property(nonatomic, getter=isLocalFilesImportEnabled) _Bool localFilesImportEnabled;
- (id <SPTFeatureFlagSignal>)provideLegacyCollectionFeatureEnabledSignal;
- (id <SPTCollectionBarButtonManager>)provideCollectionBarButtonManager;
- (void)unregisterCollectionContentListWithTitle:(NSString *)arg1 URL:(NSURL *)arg2;
- (void)registerCollectionContentListWithTitle:(NSString *)arg1 icon:(long long)arg2 URL:(NSURL *)arg3 order:(unsigned long long)arg4;
@end

