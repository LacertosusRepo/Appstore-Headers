//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEOfflineSyncStatusView, GLUETrackAccessoryLabel, GLUETrackMultipleAccessoriesViewStyle, NSLayoutConstraint, NSString;

@interface GLUETrackMultipleAccessoriesView : UIView <GLUEStyleable>
{
    GLUEOfflineSyncStatusView *_offlineSyncStatusView;
    GLUETrackAccessoryLabel *_trackAccessoryLabel;
    GLUETrackMultipleAccessoriesViewStyle *_style;
    NSLayoutConstraint *_syncStatusToAccessoryLabelConstraint;
    NSLayoutConstraint *_trackAccessoryLabelMarginConstraint;
    NSLayoutConstraint *_offlineSyncStatusViewMarginConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *offlineSyncStatusViewMarginConstraint; // @synthesize offlineSyncStatusViewMarginConstraint=_offlineSyncStatusViewMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trackAccessoryLabelMarginConstraint; // @synthesize trackAccessoryLabelMarginConstraint=_trackAccessoryLabelMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *syncStatusToAccessoryLabelConstraint; // @synthesize syncStatusToAccessoryLabelConstraint=_syncStatusToAccessoryLabelConstraint;
@property(retain, nonatomic) GLUETrackMultipleAccessoriesViewStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) GLUETrackAccessoryLabel *trackAccessoryLabel; // @synthesize trackAccessoryLabel=_trackAccessoryLabel;
@property(retain, nonatomic) GLUEOfflineSyncStatusView *offlineSyncStatusView; // @synthesize offlineSyncStatusView=_offlineSyncStatusView;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)shouldGroupAccessibilityChildren;
@property(nonatomic) long long offlineSyncStatus;
@property(nonatomic) long long accessoryLabelType;
- (void)setHighlighted:(_Bool)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)updateConstraints;
- (void)addViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

