//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponent-Protocol.h"
#import "HUBComponentWithChildren-Protocol.h"
#import "SPTPremiumDestinationUICarouselItemSizeCalculator-Protocol.h"

@class NSSet, NSString, SPTPremiumDestinationUIGLUETheme;
@protocol HUBComponentChildDelegate;

@interface SPTPremiumDestinationUICarouselComponent : NSObject <SPTPremiumDestinationUICarouselItemSizeCalculator, HUBComponent, HUBComponentWithChildren>
{
    id <HUBComponentChildDelegate> _childDelegate;
    SPTPremiumDestinationUIGLUETheme *_theme;
}

@property(retain, nonatomic) SPTPremiumDestinationUIGLUETheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <HUBComponentChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
- (void).cxx_destruct;
- (struct CGSize)calculateItemSizeForModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)createViewWithFrame:(struct CGRect)arg1;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

