//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUGSThemableComponentView.h"

@class SPTHomeUISectionHeaderView;

@interface SPTHomeUISectionHeaderComponentView : HUGSThemableComponentView
{
    unsigned long long _type;
    SPTHomeUISectionHeaderView *_sectionHeaderView;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3 type:(unsigned long long)arg4;
@property(readonly, nonatomic) SPTHomeUISectionHeaderView *sectionHeaderView; // @synthesize sectionHeaderView=_sectionHeaderView;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2 type:(unsigned long long)arg3;

@end

