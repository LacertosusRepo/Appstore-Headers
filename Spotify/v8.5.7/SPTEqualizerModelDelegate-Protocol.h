//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTEqualizerModel;

@protocol SPTEqualizerModelDelegate <NSObject>
- (void)equalizerModelDidChangeConnectActive:(SPTEqualizerModel *)arg1;
- (void)equalizerModelDidUpdatePreset:(SPTEqualizerModel *)arg1;
- (void)equalizerModelDidChangeValue:(SPTEqualizerModel *)arg1;
- (void)equalizerModelDidChangeOn:(SPTEqualizerModel *)arg1;
@end

