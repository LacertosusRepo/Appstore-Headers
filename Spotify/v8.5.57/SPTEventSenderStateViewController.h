//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GLUEButton, GLUELabel, SPTEventSenderDebugState, SPTTheme;
@protocol SPTResolver;

@interface SPTEventSenderStateViewController : UIViewController
{
    SPTEventSenderDebugState *_eventSenderDebugState;
    GLUEButton *_triggerButton;
    GLUELabel *_debugTextLabel;
    GLUELabel *_debugCoreLabel;
    id <SPTResolver> _resolver;
    SPTTheme *_theme;
    unsigned long long _counter;
}

@property(nonatomic) unsigned long long counter; // @synthesize counter=_counter;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) GLUELabel *debugCoreLabel; // @synthesize debugCoreLabel=_debugCoreLabel;
@property(retain, nonatomic) GLUELabel *debugTextLabel; // @synthesize debugTextLabel=_debugTextLabel;
@property(retain, nonatomic) GLUEButton *triggerButton; // @synthesize triggerButton=_triggerButton;
@property(retain, nonatomic) SPTEventSenderDebugState *eventSenderDebugState; // @synthesize eventSenderDebugState=_eventSenderDebugState;
- (void).cxx_destruct;
- (void)displayResponse:(id)arg1;
- (void)didTapTrigger;
- (void)setupConstraints;
- (void)setupTriggerButton;
- (void)setupDebugCoreLabel;
- (void)setupDebugTextLabel;
- (void)viewDidLoad;
- (id)initWithEventSenderDebugState:(id)arg1 resolver:(id)arg2;

@end

