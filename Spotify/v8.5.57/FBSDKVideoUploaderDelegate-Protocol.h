//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSDKVideoUploader, NSData, NSDictionary, NSError;

@protocol FBSDKVideoUploaderDelegate <NSObject>
- (void)videoUploader:(FBSDKVideoUploader *)arg1 didFailWithError:(NSError *)arg2;
- (void)videoUploader:(FBSDKVideoUploader *)arg1 didCompleteWithResults:(NSDictionary *)arg2;
- (NSData *)videoChunkDataForVideoUploader:(FBSDKVideoUploader *)arg1 startOffset:(unsigned long long)arg2 endOffset:(unsigned long long)arg3;
@end

