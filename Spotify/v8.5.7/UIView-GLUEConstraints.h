//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILayoutGuide;

@interface UIView (GLUEConstraints)
+ (id)glue_newForConstraints;
- (id)glue_constrainHorizontallyWithinContainer:(id)arg1 withMargin:(double)arg2 activate:(_Bool)arg3;
- (id)glue_constrainHorizontallyWithinContainer:(id)arg1 withMargin:(double)arg2;
- (id)glue_constrainHorizontallyWithinContainer:(id)arg1 activate:(_Bool)arg2;
- (id)glue_constrainHorizontallyWithinContainer:(id)arg1;
- (id)glue_constrainWithinContainer:(id)arg1 withInsets:(struct UIEdgeInsets)arg2 activate:(_Bool)arg3;
- (id)glue_constrainWithinContainer:(id)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (id)glue_constrainWithinContainer:(id)arg1 withMargin:(double)arg2 activate:(_Bool)arg3;
- (id)glue_constrainWithinContainer:(id)arg1 withMargin:(double)arg2;
- (id)glue_constrainWithinContainer:(id)arg1 activate:(_Bool)arg2;
- (id)glue_constrainWithinContainer:(id)arg1;
@property(readonly, nonatomic, getter=glue_compatibleSafeGuide) UILayoutGuide *compatibleSafeGuide;
@end
