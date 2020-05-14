//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUBSerializable-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString;
@protocol HUBComponentModel, HUBViewModelBuilder;

@protocol HUBViewModel <HUBSerializable>
- (id <HUBViewModelBuilder>)createBuilder;
@property(nonatomic, readonly) NSDate *buildDate;
@property(nonatomic, readonly) NSDictionary *customData;
@property(nonatomic, readonly) NSArray *overlayComponentModels;
@property(nonatomic, readonly) NSArray *bodyComponentModels;
@property(nonatomic, readonly) id <HUBComponentModel> headerComponentModel;
@property(nonatomic, readonly) NSString *navigationBarTitle;
@property(nonatomic, readonly) NSString *identifier;
@end
