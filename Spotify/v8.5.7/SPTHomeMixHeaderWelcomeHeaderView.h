//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class GLUELabel, UIView;

@interface SPTHomeMixHeaderWelcomeHeaderView : UICollectionReusableView
{
    GLUELabel *_title;
    GLUELabel *_subtitle;
    UIView *_container;
}

@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(readonly, nonatomic) GLUELabel *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) GLUELabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

