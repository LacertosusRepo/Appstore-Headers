//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class NSLayoutConstraint, NSString, SPTLanguageOnboardingGridCollectionViewLayout, SPTLanguageOnboardingGridFooterView, UICollectionView;

@interface SPTLanguageOnboardingGridView : UIView <GLUEStyleable>
{
    UICollectionView *_collectionView;
    SPTLanguageOnboardingGridFooterView *_footerView;
    SPTLanguageOnboardingGridCollectionViewLayout *_collectionViewLayout;
    NSLayoutConstraint *_footerViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *footerViewHeightConstraint; // @synthesize footerViewHeightConstraint=_footerViewHeightConstraint;
@property(readonly, nonatomic) SPTLanguageOnboardingGridCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(readonly, nonatomic) SPTLanguageOnboardingGridFooterView *footerView; // @synthesize footerView=_footerView;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)setNextButtonTitle:(id)arg1;
- (double)gridRowHeight;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
- (void)setUpConstraints;
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

