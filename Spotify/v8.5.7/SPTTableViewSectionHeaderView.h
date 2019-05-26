//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import "GLUEStyleable-Protocol.h"
#import "SPTThemableView-Protocol.h"

@class GLUELabel, NSArray, NSAttributedString, NSString, UIImageView;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTTableViewSectionHeaderView : UITableViewHeaderFooterView <GLUEStyleable, SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    long long _tableViewThemeStyle;
    long long _style;
    UIImageView *_imageView;
    GLUELabel *_titleLabel;
    NSArray *_managedConstraints;
}

+ (double)headerHeightForStyle:(long long)arg1 theme:(id)arg2;
+ (id)styleForStyle:(long long)arg1 theme:(id)arg2;
+ (double)preferredHeightForStyle:(long long)arg1;
+ (double)preferredHeight;
+ (id)shuffleIncludesHeaderCellForTableView:(id)arg1;
+ (void)registerShuffleIncludeHeaderViewOnTableView:(id)arg1;
@property(copy, nonatomic) NSArray *managedConstraints; // @synthesize managedConstraints=_managedConstraints;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long tableViewThemeStyle; // @synthesize tableViewThemeStyle=_tableViewThemeStyle;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyBackgroundColor;
- (void)applyStyling;
- (void)removeViewConstraints;
- (void)buildLeftAlignedLayout:(id)arg1 style:(id)arg2;
- (void)buildSmallLayout:(id)arg1 style:(id)arg2;
- (void)buildLargeLayout:(id)arg1 style:(id)arg2;
- (void)addViewConstraintsForStyle:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)applyThemeLayout;
- (void)setSubviewLayoutConstraintsForTheme;
- (void)layoutSubviews;
- (id)detailTextLabel;
- (id)textLabel;
@property(nonatomic) _Bool allowMultiLineTitle;
@property(copy, nonatomic) NSAttributedString *attributedTitle;
@property(copy, nonatomic) NSString *title;
- (id)initWithReuseIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isShuffleIncludesCell) _Bool shuffleIncludesCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
