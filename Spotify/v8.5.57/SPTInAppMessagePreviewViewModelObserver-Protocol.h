//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, SPTInAppMessagePreviewViewModel;

@protocol SPTInAppMessagePreviewViewModelObserver <NSObject>

@optional
- (void)previewViewModel:(SPTInAppMessagePreviewViewModel *)arg1 didFetchNoteCreativeData:(NSData *)arg2;
- (void)previewViewModel:(SPTInAppMessagePreviewViewModel *)arg1 didFetchBannerCreativeData:(NSData *)arg2;
- (void)previewViewModel:(SPTInAppMessagePreviewViewModel *)arg1 didFetchCardCreativeData:(NSData *)arg2;
@end
