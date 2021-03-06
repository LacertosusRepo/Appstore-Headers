//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "GA11YMixinEmbedder.h"
#import "YTPageStyling.h"
#import "YTResponder.h"
#import "YTThumbnailControllerDelegate.h"
#import "YTThumbnailMapping.h"

@class GIMMe, NSMutableArray, NSString, UIView, YTFormattedStringLabel, YTICompactVideoRenderer, YTQTMButton, YTSubtitleView, YTVideoThumbnailView;

@interface YTCowatchQueueItemCell : UICollectionViewCell <YTThumbnailMapping, YTThumbnailControllerDelegate, GA11YMixinEmbedder, YTPageStyling, YTResponder>
{
    NSMutableArray *_thumbnailControllers;
    UIView *_currentlyPlayingDot;
    YTVideoThumbnailView *_thumbnailView;
    YTFormattedStringLabel *_titleLabel;
    YTSubtitleView *_subtitleView;
    YTQTMButton *_actionButton;
    _Bool _currentVideo;
    id <GA11YMixinImpl> _accessibilityMixin;
    GIMMe *_gimme;
    id <YTResponder> _parentResponder;
    id <YTCowatchQueueItemCellDelegate> _delegate;
    YTICompactVideoRenderer *_videoRenderer;
}

@property(nonatomic, getter=isCurrentVideo) _Bool currentVideo; // @synthesize currentVideo=_currentVideo;
@property(retain, nonatomic) YTICompactVideoRenderer *videoRenderer; // @synthesize videoRenderer=_videoRenderer;
@property(nonatomic) __weak id <YTCowatchQueueItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(retain, nonatomic) GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (struct CGSize)thumbnailSizeForEntry:(id)arg1;
- (_Bool)hasThumbnailMapping:(id)arg1;
- (void)updateThumbnailMapping;
- (void)setSubtitles:(id)arg1;
- (void)imageLoadDidFailWithError:(id)arg1;
- (void)imageDidLoad;
- (id)thumbnailMappings;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)handleLongPress:(id)arg1;
- (void)didTapAction;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

