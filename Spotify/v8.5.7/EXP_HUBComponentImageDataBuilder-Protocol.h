//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUBJSONCompatibleBuilder-Protocol.h"

@class NSMutableDictionary, NSString, NSURL, UIImage;
@protocol EXP_HUBComponentImageData;

@protocol EXP_HUBComponentImageDataBuilder <EXP_HUBJSONCompatibleBuilder>
@property(readonly, nonatomic) NSMutableDictionary *customData;
@property(retain, nonatomic) UIImage *localImage;
@property(copy, nonatomic) NSString *placeholderIconIdentifier;
@property(copy, nonatomic) NSURL *URL;
- (id <EXP_HUBComponentImageData>)buildWithIdentifier:(NSString *)arg1 type:(long long)arg2;
@end

