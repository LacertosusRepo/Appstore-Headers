//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDictionary, NSString, SPTActionButton, SPTAdCosmosBridge, SPTTheme, UISwitch, UITableView, UITapGestureRecognizer, UITextField, UITextView;

@interface SPTClientStateViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITextView *_textView;
    UITableView *_stateConfigTableView;
    UISwitch *_focusSwitch;
    UISwitch *_activeConnnectedDevicesSwitch;
    UITextField *_viewUriTextField;
    UITextField *_elapsedStreamTimeTextField;
    UITextField *_remainingRewardTimeTextField;
    UITextField *_lastAdBreakStreamTime;
    SPTActionButton *_submitStateButton;
    NSDictionary *_activeConnectedDevice;
    SPTAdCosmosBridge *_cosmosBridge;
    SPTTheme *_theme;
    UIViewController *_clientStateViewController;
    NSArray *_cellReuseIdentifiers;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSArray *cellReuseIdentifiers; // @synthesize cellReuseIdentifiers=_cellReuseIdentifiers;
@property(retain, nonatomic) UIViewController *clientStateViewController; // @synthesize clientStateViewController=_clientStateViewController;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTAdCosmosBridge *cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(retain, nonatomic) NSDictionary *activeConnectedDevice; // @synthesize activeConnectedDevice=_activeConnectedDevice;
@property(retain, nonatomic) SPTActionButton *submitStateButton; // @synthesize submitStateButton=_submitStateButton;
@property(retain, nonatomic) UITextField *lastAdBreakStreamTime; // @synthesize lastAdBreakStreamTime=_lastAdBreakStreamTime;
@property(retain, nonatomic) UITextField *remainingRewardTimeTextField; // @synthesize remainingRewardTimeTextField=_remainingRewardTimeTextField;
@property(retain, nonatomic) UITextField *elapsedStreamTimeTextField; // @synthesize elapsedStreamTimeTextField=_elapsedStreamTimeTextField;
@property(retain, nonatomic) UITextField *viewUriTextField; // @synthesize viewUriTextField=_viewUriTextField;
@property(retain, nonatomic) UISwitch *activeConnnectedDevicesSwitch; // @synthesize activeConnnectedDevicesSwitch=_activeConnnectedDevicesSwitch;
@property(retain, nonatomic) UISwitch *focusSwitch; // @synthesize focusSwitch=_focusSwitch;
@property(retain, nonatomic) UITableView *stateConfigTableView; // @synthesize stateConfigTableView=_stateConfigTableView;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)numToString:(id)arg1;
- (void)clearStreamSlotAndSendState;
- (void)clearStreamSlotWithCallback:(CDUnknownBlockType)arg1;
- (void)updateTextViewWithState;
- (void)setupView;
- (void)initNumTextView:(id *)arg1;
- (void)dismissKeyboard;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithCosmosBridge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

