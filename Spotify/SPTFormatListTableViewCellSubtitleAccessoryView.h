//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SPTOfflineSyncStatusView, SPTTheme, SPTTrackAccessoryLabel;

@interface SPTFormatListTableViewCellSubtitleAccessoryView : UIView
{
    _Bool _explicitTrack;
    long long _offlineStatus;
    SPTOfflineSyncStatusView *_offlineSyncStatusView;
    SPTTrackAccessoryLabel *_explicitLabel;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTTrackAccessoryLabel *explicitLabel; // @synthesize explicitLabel=_explicitLabel;
@property(retain, nonatomic) SPTOfflineSyncStatusView *offlineSyncStatusView; // @synthesize offlineSyncStatusView=_offlineSyncStatusView;
@property(nonatomic) long long offlineStatus; // @synthesize offlineStatus=_offlineStatus;
@property(nonatomic, getter=isExplicitTrack) _Bool explicitTrack; // @synthesize explicitTrack=_explicitTrack;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)adjustViewWidth;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end
