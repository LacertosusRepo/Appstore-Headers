//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEStyle-Protocol.h"

@class UIColor;
@protocol SPTSortingFilteringButtonsContainerStyle;

@protocol SPTSortingFilteringButtonsCellStyle <GLUEStyle>
@property(copy, nonatomic) id <SPTSortingFilteringButtonsContainerStyle> filterButtonsContainerStyle;
@property(nonatomic) double height;
@property(nonatomic) double bottomMargin;
@property(nonatomic) double topMargin;
@property(nonatomic) double margin;
@property(copy, nonatomic) UIColor *backgroundColor;
@end

