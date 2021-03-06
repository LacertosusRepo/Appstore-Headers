//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUGSThemableComponentView.h"

@class GLUESectionHeaderView;

@interface EXP_HUGS2SectionHeaderComponentView : EXP_HUGSThemableComponentView
{
    GLUESectionHeaderView *_headerView;
}

+ (id)styleForComponentModel:(id)arg1 theme:(id)arg2;
+ (void)configureHeaderView:(id)arg1 withModel:(id)arg2 theme:(id)arg3;
+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(readonly, nonatomic) GLUESectionHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

