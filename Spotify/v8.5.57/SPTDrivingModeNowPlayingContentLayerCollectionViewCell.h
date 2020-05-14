//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, SPTDrivingModeTrackInfoView;

@interface SPTDrivingModeNowPlayingContentLayerCollectionViewCell : UICollectionViewCell
{
    SPTDrivingModeTrackInfoView *_trackInfoView;
    NSArray *_windowedContentViewConstraints;
    struct UIEdgeInsets _windowedContentInsets;
}

@property(copy, nonatomic) NSArray *windowedContentViewConstraints; // @synthesize windowedContentViewConstraints=_windowedContentViewConstraints;
@property(retain, nonatomic) SPTDrivingModeTrackInfoView *trackInfoView; // @synthesize trackInfoView=_trackInfoView;
@property(nonatomic) struct UIEdgeInsets windowedContentInsets; // @synthesize windowedContentInsets=_windowedContentInsets;
- (void).cxx_destruct;
- (void)clear;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

