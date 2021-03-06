//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTFeatureFlagSignal;

@protocol CollectionFeature <NSObject>
@property(nonatomic, getter=isLocalFilesImportEnabled) _Bool localFilesImportEnabled;
- (id <SPTFeatureFlagSignal>)provideLegacyCollectionFeatureEnabledSignal;
- (void)unregisterCollectionContentListWithTitle:(NSString *)arg1 URL:(NSURL *)arg2;
- (void)registerCollectionContentListWithTitle:(NSString *)arg1 icon:(long long)arg2 URL:(NSURL *)arg3 order:(unsigned long long)arg4;
@end

