//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "VISREFHeaderComponent-Protocol.h"

@class NSLayoutConstraint, NSString, VISREFNavigationBarView;

@interface VISREFNavigationBarForegroundView : UIView <VISREFHeaderComponent>
{
    VISREFNavigationBarView *_navigationBarView;
    NSLayoutConstraint *_navigationBarHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *navigationBarHeightConstraint; // @synthesize navigationBarHeightConstraint=_navigationBarHeightConstraint;
@property(retain, nonatomic) VISREFNavigationBarView *navigationBarView; // @synthesize navigationBarView=_navigationBarView;
- (void).cxx_destruct;
- (void)fullHeaderViewNormalizedProgressUpdate:(double)arg1;
- (void)showNavigationBar:(_Bool)arg1;
@property(nonatomic) double navigationBarHeight;
- (void)setNavigationBarOverlayGradient:(id)arg1;
- (void)setBackButton:(id)arg1;
- (void)layoutNavigationBar;
- (void)setupNavigationBar;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

