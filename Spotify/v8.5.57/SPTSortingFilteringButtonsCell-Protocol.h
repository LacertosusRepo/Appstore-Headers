//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEStyleable-Protocol.h"

@class UIView;
@protocol SPTSortingFilteringButtonsCellStyle, SPTSortingFilteringButtonsContainer;

@protocol SPTSortingFilteringButtonsCell <GLUEStyleable>
@property(readonly, nonatomic) UIView<SPTSortingFilteringButtonsContainer> *buttonsContainer;
- (void)glue_applyStyle:(id <SPTSortingFilteringButtonsCellStyle>)arg1;
@end

