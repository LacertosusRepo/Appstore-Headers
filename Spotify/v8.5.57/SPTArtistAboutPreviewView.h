//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUELabel, NSLayoutConstraint, NSString, SPTArtistAboutGlobalChartPositionView, SPTArtistAboutMonthlyListenersView, SPTDisclosureAccessoryView;

@interface SPTArtistAboutPreviewView : UIView <GLUEStyleable>
{
    SPTArtistAboutMonthlyListenersView *_monthlyListenersView;
    SPTArtistAboutGlobalChartPositionView *_globalChartPositionView;
    NSString *_biography;
    GLUELabel *_biographyLabel;
    NSLayoutConstraint *_rightEdgeDefaultConstraint;
    NSLayoutConstraint *_rightEdgeWithGlobalChartConstraint;
    NSLayoutConstraint *_bottomMarginBiographyLabelConstraint;
    NSLayoutConstraint *_disclosureViewCenterYBiographyLabelConstraint;
    NSLayoutConstraint *_disclosureViewCenterYMonthlyListenersConstraint;
    SPTDisclosureAccessoryView *_disclosureView;
}

@property(retain, nonatomic) SPTDisclosureAccessoryView *disclosureView; // @synthesize disclosureView=_disclosureView;
@property(retain, nonatomic) NSLayoutConstraint *disclosureViewCenterYMonthlyListenersConstraint; // @synthesize disclosureViewCenterYMonthlyListenersConstraint=_disclosureViewCenterYMonthlyListenersConstraint;
@property(retain, nonatomic) NSLayoutConstraint *disclosureViewCenterYBiographyLabelConstraint; // @synthesize disclosureViewCenterYBiographyLabelConstraint=_disclosureViewCenterYBiographyLabelConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomMarginBiographyLabelConstraint; // @synthesize bottomMarginBiographyLabelConstraint=_bottomMarginBiographyLabelConstraint;
@property(retain, nonatomic) NSLayoutConstraint *rightEdgeWithGlobalChartConstraint; // @synthesize rightEdgeWithGlobalChartConstraint=_rightEdgeWithGlobalChartConstraint;
@property(retain, nonatomic) NSLayoutConstraint *rightEdgeDefaultConstraint; // @synthesize rightEdgeDefaultConstraint=_rightEdgeDefaultConstraint;
@property(retain, nonatomic) GLUELabel *biographyLabel; // @synthesize biographyLabel=_biographyLabel;
@property(retain, nonatomic) NSString *biography; // @synthesize biography=_biography;
@property(readonly, nonatomic) __weak SPTArtistAboutGlobalChartPositionView *globalChartPositionView; // @synthesize globalChartPositionView=_globalChartPositionView;
@property(readonly, nonatomic) SPTArtistAboutMonthlyListenersView *monthlyListenersView; // @synthesize monthlyListenersView=_monthlyListenersView;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)addViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

