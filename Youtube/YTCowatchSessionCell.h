//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "YTCollectionViewCellProtocol.h"
#import "YTPageStyling.h"
#import "YTThumbnailMapping.h"

@class NSString, UIImageView, UIView, YTFormattedStringLabel, YTICowatchSession, YTShareContactImageView, YTVideoThumbnailView;

@interface YTCowatchSessionCell : UICollectionViewCell <YTPageStyling, YTCollectionViewCellProtocol, YTThumbnailMapping>
{
    YTICowatchSession *_entry;
    YTFormattedStringLabel *_cowatchNameLabel;
    YTFormattedStringLabel *_activityLabel;
    YTFormattedStringLabel *_bottomTextLabel;
    YTShareContactImageView *_participantsImageView;
    YTVideoThumbnailView *_videoThumbnailView;
    YTFormattedStringLabel *_inviteDescriptionLabel;
    UIImageView *_acceptImageView;
    UIView *_bottomSeparator;
    YTFormattedStringLabel *_unreadDotLabel;
    _Bool _isInCurrentSession;
    long long _pageStyle;
    id <YTResponder> _parentResponder;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 isInCurrentSession:(_Bool)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)updateStyle:(long long)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)makeBoldWithString:(id)arg1;
- (id)thumbnailMappings;
- (void)setIsCurrentSession:(_Bool)arg1;
- (id)entry;
- (void)updateLabels;
- (void)setEntry:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

