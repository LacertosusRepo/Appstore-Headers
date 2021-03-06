//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SPTGLUELegacyTrackAccessoryLabel, SPTOfflineSyncStatusView, SPTTheme;

@interface SPTGLUELegacyTrackAccessoryMultiIconsView : UIView
{
    SPTOfflineSyncStatusView *_offlineSyncStatusView;
    SPTGLUELegacyTrackAccessoryLabel *_trackAccessoryLabel;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTGLUELegacyTrackAccessoryLabel *trackAccessoryLabel; // @synthesize trackAccessoryLabel=_trackAccessoryLabel;
@property(retain, nonatomic) SPTOfflineSyncStatusView *offlineSyncStatusView; // @synthesize offlineSyncStatusView=_offlineSyncStatusView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) long long syncStatus;
@property(nonatomic) long long accessoryLabelType;
- (void)layoutSubviews;
- (id)init;

@end

