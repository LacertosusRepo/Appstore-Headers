//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableDictionary, UIColor;
@protocol SPTSlateDataSource, SPTSlateDelegate;

@protocol SPTSlate <NSObject>
@property(readonly, nonatomic) NSMutableDictionary *userInfo;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) double shadowRadius;
@property(readonly, nonatomic) struct CGSize shadowOffset;
@property(readonly, nonatomic) UIColor *shadowColor;
@property(readonly, nonatomic) double shadowAlpha;
@property(readonly, nonatomic) double cornerRadius;
@property(readonly, nonatomic) struct CGSize slateSize;
@property(nonatomic) __weak id <SPTSlateDelegate> delegate;
@property(nonatomic) __weak id <SPTSlateDataSource> dataSource;
@end

