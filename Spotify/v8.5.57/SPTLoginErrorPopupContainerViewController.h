//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, SPTLoginErrorPopupContainerView, SPTLoginTheme;

@interface SPTLoginErrorPopupContainerViewController : UIViewController
{
    NSString *_titleString;
    NSString *_messageString;
    SPTLoginTheme *_theme;
}

@property(retain, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(copy, nonatomic) NSString *messageString; // @synthesize messageString=_messageString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTitle:(id)arg1 message:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(retain, nonatomic) SPTLoginErrorPopupContainerView *view; // @dynamic view;

@end

