//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTGaiaDevicesAvailableViewDelegate-Protocol.h"
#import "SPTNowPlayingContainedViewController-Protocol.h"

@class NSString, SPTNowPlayingLogger, SPTTheme, UIButton, UIView;
@protocol SPTGaiaDevicePickerPresenter, SPTGaiaDevicesAvailableView, SPTNowPlayingContainingViewController, SPTNowPlayingManager, SPTPlayer;

@interface SPTNowPlayingChromecastBarViewController : UIViewController <SPTGaiaDevicesAvailableViewDelegate, SPTNowPlayingContainedViewController>
{
    _Bool _devicePickerHidden;
    UIViewController<SPTNowPlayingContainingViewController> *container;
    id <SPTGaiaDevicePickerPresenter> _devicePickerPresenter;
    id <SPTNowPlayingManager> _nowPlayingManager;
    SPTTheme *_theme;
    UIButton *_devicesLabelButton;
    UIView<SPTGaiaDevicesAvailableView> *_devicesAvailableView;
    NSString *_chromecastAccessibilityLabel;
    SPTNowPlayingLogger *_logger;
    id <SPTPlayer> _player;
}

@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSString *chromecastAccessibilityLabel; // @synthesize chromecastAccessibilityLabel=_chromecastAccessibilityLabel;
@property(retain, nonatomic) UIView<SPTGaiaDevicesAvailableView> *devicesAvailableView; // @synthesize devicesAvailableView=_devicesAvailableView;
@property(retain, nonatomic) UIButton *devicesLabelButton; // @synthesize devicesLabelButton=_devicesLabelButton;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(retain, nonatomic) id <SPTGaiaDevicePickerPresenter> devicePickerPresenter; // @synthesize devicePickerPresenter=_devicePickerPresenter;
@property(nonatomic, getter=isDevicePickerHidden) _Bool devicePickerHidden; // @synthesize devicePickerHidden=_devicePickerHidden;
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container; // @synthesize container;
- (void).cxx_destruct;
- (void)didUpdateDevicesAvailableText:(id)arg1 withAccessibilityLabel:(id)arg2;
- (void)presentDevicePickerFromTA;
- (void)devicesLabelButtonTapped:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (id)initWithDevicePickerPresenter:(id)arg1 nowPlayingManager:(id)arg2 theme:(id)arg3 devicesAvailableView:(id)arg4 logger:(id)arg5 player:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

