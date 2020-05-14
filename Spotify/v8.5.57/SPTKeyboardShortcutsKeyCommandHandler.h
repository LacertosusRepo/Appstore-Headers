//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MessageBarController, NSMutableDictionary, UIView;
@protocol SPTKeyboardShortcutsTestManager, SPTMetaViewController;

@interface SPTKeyboardShortcutsKeyCommandHandler : NSObject
{
    MessageBarController *_messageBarController;
    id <SPTMetaViewController> _metaViewController;
    NSMutableDictionary *_keyCommands;
    id <SPTKeyboardShortcutsTestManager> _testManager;
    UIView *_mostRecentFirstResponder;
}

@property(nonatomic) __weak UIView *mostRecentFirstResponder; // @synthesize mostRecentFirstResponder=_mostRecentFirstResponder;
@property(retain, nonatomic) id <SPTKeyboardShortcutsTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) NSMutableDictionary *keyCommands; // @synthesize keyCommands=_keyCommands;
@property(nonatomic) __weak id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(nonatomic) __weak MessageBarController *messageBarController; // @synthesize messageBarController=_messageBarController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveKeyCommand:(id)arg1;
- (void)unregisterKeyCommand:(id)arg1;
- (id)registerKeyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(CDUnknownBlockType)arg3 discoverabilityTitle:(id)arg4;
- (id)allActiveKeyCommands;
- (id)initWithMessageBarController:(id)arg1 metaViewController:(id)arg2 testManager:(id)arg3;

@end
