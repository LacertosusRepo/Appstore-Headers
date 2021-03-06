//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "YTCollectionViewCellProtocol.h"
#import "YTThumbnailMapping.h"

@class NSMutableArray, NSString, UIScrollView, YTIChipCloudRenderer;

@interface YTChipCloudCell : UICollectionViewCell <YTCollectionViewCellProtocol, YTThumbnailMapping>
{
    YTIChipCloudRenderer *_renderer;
    NSMutableArray *_chipViews;
    UIScrollView *_scrollView;
    id _tapTarget;
    SEL _tapTargetSelector;
    id <YTResponder> _parentResponder;
    CDUnknownBlockType _onSelectChipRenderer;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3 safeAreaInsets:(struct UIEdgeInsets)arg4;
@property(copy, nonatomic) CDUnknownBlockType onSelectChipRenderer; // @synthesize onSelectChipRenderer=_onSelectChipRenderer;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (id)framesForChipViewsWithWidth:(double)arg1;
- (id)entry;
- (id)thumbnailMappings;
- (void)setEntry:(id)arg1;
- (void)selectChip:(id)arg1;
- (void)selectChipForRenderer:(id)arg1;
- (void)removeTapTarget;
- (void)setTapTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

