//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSMutableArray, UILabel;

@interface SyncHowtoViewController : UIViewController
{
    UILabel *_titleTextLabel;
    NSMutableArray *_stepTextLabels;
}

@property(retain, nonatomic) NSMutableArray *stepTextLabels; // @synthesize stepTextLabels=_stepTextLabels;
@property(retain, nonatomic) UILabel *titleTextLabel; // @synthesize titleTextLabel=_titleTextLabel;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)layoutCenteredWithViews:(id)arg1 innerPadding:(double)arg2;
- (void)viewDidLoad;

@end

