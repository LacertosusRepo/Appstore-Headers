//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SPTUBIUserBehaviourInstrumentationDebugStateLogger, UITextView;

@interface SPTUBIUserBehaviourInstrumentationStateViewController : UIViewController
{
    SPTUBIUserBehaviourInstrumentationDebugStateLogger *_debugStateLogger;
    UITextView *_textView;
}

@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) SPTUBIUserBehaviourInstrumentationDebugStateLogger *debugStateLogger; // @synthesize debugStateLogger=_debugStateLogger;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithDebugStateLogger:(id)arg1;

@end

