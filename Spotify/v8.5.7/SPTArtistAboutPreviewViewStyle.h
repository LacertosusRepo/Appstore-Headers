//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString, SPTArtistAboutGlobalChartPositionViewStyle, SPTArtistAboutMonthlyListenersViewStyle, UIColor;

@interface SPTArtistAboutPreviewViewStyle : NSObject <GLUEStyle>
{
    double _viewHeight;
    double _noBiographyViewHeight;
    UIColor *_backgroundColor;
    GLUELabelStyle *_biographyLabelStyle;
    SPTArtistAboutMonthlyListenersViewStyle *_monthlyListenersViewStyle;
    SPTArtistAboutGlobalChartPositionViewStyle *_globalChartPositionViewStyle;
}

@property(copy, nonatomic) SPTArtistAboutGlobalChartPositionViewStyle *globalChartPositionViewStyle; // @synthesize globalChartPositionViewStyle=_globalChartPositionViewStyle;
@property(copy, nonatomic) SPTArtistAboutMonthlyListenersViewStyle *monthlyListenersViewStyle; // @synthesize monthlyListenersViewStyle=_monthlyListenersViewStyle;
@property(copy, nonatomic) GLUELabelStyle *biographyLabelStyle; // @synthesize biographyLabelStyle=_biographyLabelStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double noBiographyViewHeight; // @synthesize noBiographyViewHeight=_noBiographyViewHeight;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

