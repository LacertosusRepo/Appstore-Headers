//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationBar.h>

@class UIColor, UIView;
@protocol UINavigationBarDelegate;

@interface IMNavigationBar : UINavigationBar
{
    id <UINavigationBarDelegate> tempDelegate;
    UIView *backgroundView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *imBackgroundView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)imInitialize;
@property(retain, nonatomic) UIColor *imBackgroundColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)imPopNavigationItemInteractively:(id)arg1;

@end

