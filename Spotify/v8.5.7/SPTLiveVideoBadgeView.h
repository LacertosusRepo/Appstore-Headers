//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface SPTLiveVideoBadgeView : UIView
{
    UIView *_dotView;
    UILabel *_liveLabel;
}

@property(retain, nonatomic) UILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(retain, nonatomic) UIView *dotView; // @synthesize dotView=_dotView;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupLabel;
- (void)setupDot;
- (id)initWithFrame:(struct CGRect)arg1;

@end

