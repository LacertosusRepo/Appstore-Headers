//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class GLUEButton, NSArray, NSString, SPTInAppMessagePreviewViewModel, UITableView, UITextField, UIView;
@protocol GLUETheme, SPTInAppMessagePreviewCreativeViewControllerDelegate;

@interface SPTInAppMessagePreviewCreativeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    id <SPTInAppMessagePreviewCreativeViewControllerDelegate> _delegate;
    id <GLUETheme> _theme;
    GLUEButton *_submitButton;
    GLUEButton *_cancelButton;
    SPTInAppMessagePreviewViewModel *_previewViewModel;
    UITableView *_creativeDetailsTableView;
    UIView *_contentView;
    UITextField *_creativeIdTextField;
    NSArray *_layoutConstraints;
    NSArray *_triggerTypes;
    NSString *_selectedType;
}

@property(copy, nonatomic) NSString *selectedType; // @synthesize selectedType=_selectedType;
@property(copy, nonatomic) NSArray *triggerTypes; // @synthesize triggerTypes=_triggerTypes;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) UITextField *creativeIdTextField; // @synthesize creativeIdTextField=_creativeIdTextField;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UITableView *creativeDetailsTableView; // @synthesize creativeDetailsTableView=_creativeDetailsTableView;
@property(retain, nonatomic) SPTInAppMessagePreviewViewModel *previewViewModel; // @synthesize previewViewModel=_previewViewModel;
@property(retain, nonatomic) GLUEButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) GLUEButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTInAppMessagePreviewCreativeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getUserSelectedTriggerType;
- (void)cancelButtonPressed;
- (void)submitButtonPressed;
- (void)doneButtonPressed;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)createLayoutConstraints;
- (void)setupButtons;
- (void)setupViews;
- (void)setupArray;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

