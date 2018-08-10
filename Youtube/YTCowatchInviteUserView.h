//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTPageStyling.h"
#import "YTThumbnailMapping.h"

@class NSString, YTFormattedStringLabel, YTICowatchUser, YTImageView;

@interface YTCowatchInviteUserView : UIView <YTPageStyling, YTThumbnailMapping>
{
    YTImageView *_avatarView;
    YTFormattedStringLabel *_userNameLabel;
    _Bool _selected;
    long long _pageStyle;
    id <YTCowatchInviteCellDelegate> _delegate;
    YTICowatchUser *_cowatchUser;
}

@property(readonly, nonatomic) YTICowatchUser *cowatchUser; // @synthesize cowatchUser=_cowatchUser;
@property(nonatomic) __weak id <YTCowatchInviteCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)tappedUser;
- (void)setSelected:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)thumbnailMappings;
- (struct CGSize)positionViews:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCowatchUser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

