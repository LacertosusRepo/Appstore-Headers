//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "YTCellActionProtocol.h"
#import "YTCollectionViewCellProtocol.h"
#import "YTThumbnailMapping.h"

@class GIMMe, NSString, YTIReelItemRenderer, YTReelShelfItemView;

@interface YTReelShelfItemCell : YTCollectionViewCell <YTCollectionViewCellProtocol, YTCellActionProtocol, YTThumbnailMapping>
{
    YTIReelItemRenderer *_renderer;
    YTReelShelfItemView *_itemView;
    _Bool _read;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

+ (struct CGSize)availableWidthSizeForRenderer:(id)arg1 size:(struct CGSize)arg2;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3 safeAreaInsets:(struct UIEdgeInsets)arg4;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(nonatomic, getter=isRead) _Bool read; // @synthesize read=_read;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (void)removeLongPressTarget;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (id)thumbnailMappings;
- (void)prepareForReuse;
- (void)setEntry:(id)arg1;
- (id)entry;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

