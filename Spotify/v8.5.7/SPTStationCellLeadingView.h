//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEImageView, UIImageView;

@interface SPTStationCellLeadingView : UIView
{
    GLUEImageView *_stationImageView;
    UIImageView *_radioWaveImageView;
}

@property(readonly, nonatomic) UIImageView *radioWaveImageView; // @synthesize radioWaveImageView=_radioWaveImageView;
@property(readonly, nonatomic) GLUEImageView *stationImageView; // @synthesize stationImageView=_stationImageView;
- (void).cxx_destruct;
- (void)addViewConstraints;
- (id)init;

@end

