//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HUBViewURIPredicate, NSArray, NSDictionary, NSString;
@protocol HUBActionHandler, HUBContentReloadPolicy, HUBViewControllerScrollHandler;

@protocol HUBFeatureRegistry
- (void)unregisterFeatureWithIdentifier:(NSString *)arg1;
- (void)registerFeatureWithIdentifier:(NSString *)arg1 viewURIPredicate:(HUBViewURIPredicate *)arg2 title:(NSString *)arg3 contentOperationFactories:(NSArray *)arg4 contentReloadPolicy:(id <HUBContentReloadPolicy>)arg5 customJSONSchemaIdentifier:(NSString *)arg6 actionHandler:(id <HUBActionHandler>)arg7 viewControllerScrollHandler:(id <HUBViewControllerScrollHandler>)arg8 options:(NSDictionary *)arg9;
- (void)registerFeatureWithIdentifier:(NSString *)arg1 viewURIPredicate:(HUBViewURIPredicate *)arg2 title:(NSString *)arg3 contentOperationFactories:(NSArray *)arg4 contentReloadPolicy:(id <HUBContentReloadPolicy>)arg5 customJSONSchemaIdentifier:(NSString *)arg6 actionHandler:(id <HUBActionHandler>)arg7 viewControllerScrollHandler:(id <HUBViewControllerScrollHandler>)arg8;
@end

