//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HUBJSONCompatibleBuilder.h"

@class NSArray, NSDictionary, NSNumber, NSString, NSURL, UIImage;

@protocol HUBComponentModelBuilder <HUBJSONCompatibleBuilder>
@property(retain, nonatomic) NSDictionary *customData;
@property(retain, nonatomic) NSDictionary *loggingData;
@property(retain, nonatomic) NSDictionary *metadata;
@property(readonly, nonatomic) id <HUBComponentTargetBuilder> targetBuilder;
@property(copy, nonatomic) NSString *iconIdentifier;
@property(retain, nonatomic) UIImage *backgroundImage;
@property(copy, nonatomic) NSURL *backgroundImageURL;
@property(readonly, nonatomic) id <HUBComponentImageDataBuilder> backgroundImageDataBuilder;
@property(retain, nonatomic) UIImage *mainImage;
@property(copy, nonatomic) NSURL *mainImageURL;
@property(readonly, nonatomic) id <HUBComponentImageDataBuilder> mainImageDataBuilder;
@property(copy, nonatomic) NSString *descriptionText;
@property(copy, nonatomic) NSString *accessoryTitle;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *componentCategory;
@property(copy, nonatomic) NSString *componentName;
@property(copy, nonatomic) NSString *componentNamespace;
@property(copy, nonatomic) NSString *groupIdentifier;
@property(copy, nonatomic) NSNumber *preferredIndex;
@property(readonly, copy, nonatomic) NSString *modelIdentifier;
- (void)removeAllChildBuilders;
- (void)removeBuilderForChildWithIdentifier:(NSString *)arg1;
- (NSArray *)buildersForChildrenInGroupWithIdentifier:(NSString *)arg1;
- (id <HUBComponentModelBuilder>)builderForChildWithIdentifier:(NSString *)arg1;
- (_Bool)builderExistsForChildWithIdentifier:(NSString *)arg1;
- (NSArray *)allChildBuilders;
- (id <HUBComponentImageDataBuilder>)builderForCustomImageDataWithIdentifier:(NSString *)arg1;
- (_Bool)builderExistsForCustomImageDataWithIdentifier:(NSString *)arg1;
@end

