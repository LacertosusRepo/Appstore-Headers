//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBComponent-Protocol.h"

@class NSSet, SPTPremiumDestinationGLUETheme;

@interface SPTPremiumDestinationOfferTitlePricePeriodComponent : NSObject <EXP_HUBComponent>
{
    SPTPremiumDestinationGLUETheme *_theme;
}

@property(retain, nonatomic) SPTPremiumDestinationGLUETheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)createViewWithFrame:(struct CGRect)arg1;
- (id)initWithTheme:(id)arg1;

@end

