//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

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
