//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUBJSONCompatibleBuilder.h"

@class NSMutableDictionary, NSString, NSURL, UIImage;

@protocol EXP_HUBComponentImageDataBuilder <EXP_HUBJSONCompatibleBuilder>
@property(readonly, nonatomic) NSMutableDictionary *customData;
@property(retain, nonatomic) UIImage *localImage;
@property(copy, nonatomic) NSString *placeholderIconIdentifier;
@property(copy, nonatomic) NSURL *URL;
- (id <EXP_HUBComponentImageData>)buildWithIdentifier:(NSString *)arg1 type:(long long)arg2;
@end
