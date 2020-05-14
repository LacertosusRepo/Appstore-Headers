//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SPTSettingsStorageBarView : UIView
{
    UIView *_backgroundView;
    UIView *_cacheView;
    UIView *_downloadsView;
    UIView *_othersView;
    long long _totalSpaceMb;
    long long _freeSpaceMb;
    long long _appDataSizeMb;
    long long _downloadsSizeMb;
}

@property(nonatomic) long long downloadsSizeMb; // @synthesize downloadsSizeMb=_downloadsSizeMb;
@property(nonatomic) long long appDataSizeMb; // @synthesize appDataSizeMb=_appDataSizeMb;
@property(nonatomic) long long freeSpaceMb; // @synthesize freeSpaceMb=_freeSpaceMb;
@property(nonatomic) long long totalSpaceMb; // @synthesize totalSpaceMb=_totalSpaceMb;
@property(readonly, nonatomic) UIView *othersView; // @synthesize othersView=_othersView;
@property(readonly, nonatomic) UIView *downloadsView; // @synthesize downloadsView=_downloadsView;
@property(readonly, nonatomic) UIView *cacheView; // @synthesize cacheView=_cacheView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateStatsWithTotalSpaceMb:(long long)arg1 freeSpaceMb:(long long)arg2 appDataSizeMb:(long long)arg3 downloadsSizeMb:(long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

