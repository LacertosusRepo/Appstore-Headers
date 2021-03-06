//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError;
@protocol SPTVideoResourceLoaderInternal;

@protocol SPTVideoResourceLoaderInternalDelegate <NSObject>
- (void)resourceLoader:(id <SPTVideoResourceLoaderInternal>)arg1 didEncounterError:(NSError *)arg2;
- (void)resourceLoaderDidLoadEncryptionKey:(id <SPTVideoResourceLoaderInternal>)arg1 ofEncryptionType:(long long)arg2;
- (void)resourceLoaderWillLoadEncryptionKey:(id <SPTVideoResourceLoaderInternal>)arg1;
- (void)resourceLoader:(id <SPTVideoResourceLoaderInternal>)arg1 didLoadManifestWithAvailableSubtitles:(NSArray *)arg2;
- (void)resourceLoaderWillLoadManifest:(id <SPTVideoResourceLoaderInternal>)arg1;
- (void)resourceLoaderDidEnableFullVideoUsage:(id <SPTVideoResourceLoaderInternal>)arg1;
- (void)resourceLoader:(id <SPTVideoResourceLoaderInternal>)arg1 willDownloadVideoSegment:(long long)arg2;
@end

