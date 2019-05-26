//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUBSerializable-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString, UINavigationItem;
@protocol HUBComponentModel;

@protocol HUBViewModel <HUBSerializable>
@property(readonly, nonatomic) NSDate *buildDate;
@property(readonly, nonatomic) NSDictionary *customData;
@property(readonly, nonatomic) NSArray *overlayComponentModels;
@property(readonly, nonatomic) NSArray *bodyComponentModels;
@property(readonly, nonatomic) id <HUBComponentModel> headerComponentModel;
@property(readonly, copy, nonatomic) UINavigationItem *navigationItem;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

