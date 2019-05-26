//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTSettingsTableViewCell.h"

@class UILabel, UIStackView;

@interface SPTSettingsStorageLabelsTableViewCell : SPTSettingsTableViewCell
{
    UIStackView *_labelsContainer;
    UILabel *_othersLabel;
    UILabel *_downloadsLabel;
    UILabel *_cacheLabel;
    UILabel *_freeLabel;
}

@property(readonly, nonatomic) UILabel *freeLabel; // @synthesize freeLabel=_freeLabel;
@property(readonly, nonatomic) UILabel *cacheLabel; // @synthesize cacheLabel=_cacheLabel;
@property(readonly, nonatomic) UILabel *downloadsLabel; // @synthesize downloadsLabel=_downloadsLabel;
@property(readonly, nonatomic) UILabel *othersLabel; // @synthesize othersLabel=_othersLabel;
@property(readonly, nonatomic) UIStackView *labelsContainer; // @synthesize labelsContainer=_labelsContainer;
- (void).cxx_destruct;
- (void)updateStatsWithTotalSpaceMb:(long long)arg1 freeSpaceMb:(long long)arg2 appDataSizeMb:(long long)arg3 downloadsSizeMb:(long long)arg4;
- (id)createLabel;
- (id)createIconWithColor:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

