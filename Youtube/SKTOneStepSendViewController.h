//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKTMinimizedViewController.h"

#import "SKTSelectedContactsDisplayDelegate.h"
#import "SKTSelectedContactsViewControllerDelegate.h"

@class NSString, SKTAccessoryWrapperView;

@interface SKTOneStepSendViewController : SKTMinimizedViewController <SKTSelectedContactsViewControllerDelegate, SKTSelectedContactsDisplayDelegate>
{
    id <SKTShareSheetDelegate> shareSheetDelegate;
    SKTAccessoryWrapperView *_accessoryWrapperView;
    NSString *_activeAccountEmail;
    unsigned long long _currentState;
}

@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSString *activeAccountEmail; // @synthesize activeAccountEmail=_activeAccountEmail;
@property(retain, nonatomic) SKTAccessoryWrapperView *accessoryWrapperView; // @synthesize accessoryWrapperView=_accessoryWrapperView;
- (void)setShareSheetDelegate:(id)arg1;
- (id)shareSheetDelegate;
- (void).cxx_destruct;
- (void)transitionToState:(unsigned long long)arg1;
- (void)topSuggestionsDisplay:(id)arg1 didTapContact:(id)arg2;
- (_Bool)selectedContactsVC:(id)arg1 shouldUpdateInputState:(long long)arg2 fromInputState:(long long)arg3;
- (void)selectedContactsVC:(id)arg1 didRemoveContact:(id)arg2;
- (_Bool)chipsViewShouldBehaveAsButton;
- (id)inputAccessoryView;
- (_Bool)canBecomeFirstResponder;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 uiOptions:(id)arg2 contactsDataManager:(id)arg3 advancedTransitionsService:(id)arg4 analyticsProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

