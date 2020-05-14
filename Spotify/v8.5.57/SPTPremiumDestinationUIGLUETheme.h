//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEThemeBase.h"

@class SPTPremiumDestinationUICarouselStyle, SPTPremiumDestinationUICtaStyle, SPTPremiumDestinationUICurrentPlanStyle, SPTPremiumDestinationUIFlexboxButtonStyle, SPTPremiumDestinationUIFlexboxLegalTextStyle, SPTPremiumDestinationUIFlexboxSubtitleStyle, SPTPremiumDestinationUIFlexboxTitleStyle, SPTPremiumDestinationUIHeaderTitleStyle, SPTPremiumDestinationUILegalTextStyle, SPTPremiumDestinationUIOfferCardStyle, SPTPremiumDestinationUIOfferDescriptionStyle, SPTPremiumDestinationUIOfferTitlePricePeriodStyle, SPTPremiumDestinationUIOfferTitleStyle, SPTPremiumDestinationUIValueCardSingleStyle, SPTPremiumDestinationUIValueCardStyle, SPTPremiumDestinationUIValueComparisonCardStyle;
@protocol GLUEStyle;

@interface SPTPremiumDestinationUIGLUETheme : GLUEThemeBase
{
}

@property(readonly, copy, nonatomic) SPTPremiumDestinationUIFlexboxLegalTextStyle *flexboxLegalTextStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationUIFlexboxSubtitleStyle *flexboxSubtitleStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationUIFlexboxButtonStyle *flexboxButtonStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationUIFlexboxTitleStyle *flexboxTitleStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationUIHeaderTitleStyle *headerTitleStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationUICtaStyle<GLUEStyle> *offerCtaStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationUIOfferTitlePricePeriodStyle<GLUEStyle> *offerTitlePricePeriodStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationUIOfferTitleStyle<GLUEStyle> *offerTitleStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationUIOfferDescriptionStyle<GLUEStyle> *offerDescriptionStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationUIOfferCardStyle<GLUEStyle> *offerCardStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationUICurrentPlanStyle<GLUEStyle> *currentPlanStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationUIValueCardSingleStyle *valueCardSingleStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationUIValueCardStyle *valueCardStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationUIValueComparisonCardStyle<GLUEStyle> *valueComparisonCardStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationUICarouselStyle<GLUEStyle> *carouselStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationUILegalTextStyle<GLUEStyle> *legalTextStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationUICtaStyle<GLUEStyle> *primaryCtaStyle;
- (double)offerCardComponentBottomContentEdgeMargin;
- (double)flexboxComponentVerticalMargin;
- (double)offerCardComponentVerticalMargin;

@end

