//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUBJSONCompatibleBuilder-Protocol.h"

@class NSArray, NSDictionary, NSString, UINavigationItem;
@protocol HUBComponentModelBuilder;

@protocol HUBViewModelBuilder <HUBJSONCompatibleBuilder>
@property(retain, nonatomic) NSDictionary *customData;
@property(readonly, nonatomic) _Bool headerComponentModelBuilderExists;
@property(readonly, nonatomic) id <HUBComponentModelBuilder> headerComponentModelBuilder;
@property(readonly, nonatomic) UINavigationItem *navigationItem;
@property(copy, nonatomic) NSString *navigationBarTitle;
@property(copy, nonatomic) NSString *viewIdentifier;
@property(readonly, nonatomic) unsigned long long numberOfOverlayComponentModelBuilders;
@property(readonly, nonatomic) unsigned long long numberOfBodyComponentModelBuilders;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)setCustomDataValue:(id)arg1 forKey:(NSString *)arg2;
- (void)removeAllComponentModelBuilders;
- (void)removeBuilderForOverlayComponentModelWithIdentifier:(NSString *)arg1;
- (void)removeBuilderForBodyComponentModelWithIdentifier:(NSString *)arg1;
- (void)removeHeaderComponentModelBuilder;
- (void)enumerateAllComponentModelBuildersWithBlock:(_Bool (^)(id <HUBComponentModelBuilder>))arg1;
- (id <HUBComponentModelBuilder>)builderForOverlayComponentModelWithIdentifier:(NSString *)arg1;
- (id <HUBComponentModelBuilder>)builderForBodyComponentModelWithIdentifier:(NSString *)arg1;
- (NSArray *)allOverlayComponentModelBuilders;
- (NSArray *)allBodyComponentModelBuilders;
- (_Bool)builderExistsForOverlayComponentModelWithIdentifier:(NSString *)arg1;
- (_Bool)builderExistsForBodyComponentModelWithIdentifier:(NSString *)arg1;
@end

