//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUBJSONCompatibleBuilder-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;
@protocol HUBComponentModelBuilder, HUBViewModel, HUBViewModelBuilder;

@protocol HUBViewModelBuilder <HUBJSONCompatibleBuilder>
@property(readonly, nonatomic) NSMutableDictionary *customData;
@property(readonly, nonatomic) _Bool headerComponentModelBuilderExists;
@property(readonly, nonatomic) id <HUBComponentModelBuilder> headerComponentModelBuilder;
@property(copy, nonatomic) NSString *navigationBarTitle;
@property(copy, nonatomic) NSString *viewIdentifier;
@property(readonly, nonatomic) unsigned long long numberOfOverlayComponentModelBuilders;
@property(readonly, nonatomic) unsigned long long numberOfBodyComponentModelBuilders;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)removeAllComponentModelBuilders;
- (void)removeBuilderForOverlayComponentModelWithIdentifier:(NSString *)arg1;
- (void)removeBuilderForBodyComponentModelWithIdentifier:(NSString *)arg1;
- (void)removeHeaderComponentModelBuilder;
- (void)addViewModelBuilder:(id <HUBViewModelBuilder>)arg1;
- (void)appendOverlayComponentModelBuilder:(id <HUBComponentModelBuilder>)arg1;
- (void)appendBodyComponentModelBuilder:(id <HUBComponentModelBuilder>)arg1;
- (void)enumerateAllComponentModelBuildersWithBlock:(_Bool (^)(id <HUBComponentModelBuilder>))arg1;
- (id <HUBComponentModelBuilder>)builderForOverlayComponentModelWithIdentifier:(NSString *)arg1;
- (id <HUBComponentModelBuilder>)builderForBodyComponentModelWithIdentifier:(NSString *)arg1;
- (NSArray *)allOverlayComponentModelBuilders;
- (NSArray *)allBodyComponentModelBuilders;
- (_Bool)builderExistsForOverlayComponentModelWithIdentifier:(NSString *)arg1;
- (_Bool)builderExistsForBodyComponentModelWithIdentifier:(NSString *)arg1;
- (id <HUBViewModel>)build;
@end

