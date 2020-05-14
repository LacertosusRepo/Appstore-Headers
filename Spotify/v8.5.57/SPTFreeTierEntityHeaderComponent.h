//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponent-Protocol.h"

@class NSSet;
@protocol GLUETheme;

@interface SPTFreeTierEntityHeaderComponent : NSObject <HUBComponent>
{
    id <GLUETheme> _theme;
}

@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)buttonModelFromModel:(id)arg1;
- (double)preferredViewHeightForDisplayingModel:(id)arg1;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithTheme:(id)arg1;

@end
