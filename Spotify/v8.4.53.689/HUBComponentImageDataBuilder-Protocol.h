//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HUBJSONCompatibleBuilder.h"

@class NSDictionary, NSString, NSURL, UIImage;

@protocol HUBComponentImageDataBuilder <HUBJSONCompatibleBuilder>
@property(retain, nonatomic) NSDictionary *customData;
@property(retain, nonatomic) UIImage *localImage;
@property(copy, nonatomic) NSString *placeholderIconIdentifier;
@property(copy, nonatomic) NSURL *URL;
@end

