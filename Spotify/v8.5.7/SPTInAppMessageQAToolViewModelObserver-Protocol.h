//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, SPTInAppMessageQAToolViewModel;

@protocol SPTInAppMessageQAToolViewModelObserver <NSObject>

@optional
- (void)qaToolViewModel:(SPTInAppMessageQAToolViewModel *)arg1 didFetchNoteCreativesData:(NSData *)arg2;
- (void)qaToolViewModel:(SPTInAppMessageQAToolViewModel *)arg1 didFetchBannerCreativesData:(NSData *)arg2;
- (void)qaToolViewModel:(SPTInAppMessageQAToolViewModel *)arg1 didFetchCardCreativesData:(NSData *)arg2;
@end

