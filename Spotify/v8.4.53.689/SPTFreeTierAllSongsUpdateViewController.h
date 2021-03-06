//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class GLUELabel, NSArray, NSString, NSTimer, SPTFreeTierAllSongsTheme, UIActivityIndicatorView, UIStackView;

@interface SPTFreeTierAllSongsUpdateViewController : UIViewController
{
    SPTFreeTierAllSongsTheme *_theme;
    UIStackView *_stackView;
    GLUELabel *_messageLabel;
    UIActivityIndicatorView *_activityIndicator;
    double _duration;
    NSString *_message;
    CDUnknownBlockType _completion;
    NSTimer *_timer;
    NSArray *_titleConstraints;
}

@property(retain, nonatomic) NSArray *titleConstraints; // @synthesize titleConstraints=_titleConstraints;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) GLUELabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) SPTFreeTierAllSongsTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)applyStyle:(id)arg1;
- (void)onTimer:(id)arg1;
- (void)setupTimer;
- (void)setupConstraints;
- (void)initializeInterface;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)displayMessage:(id)arg1 forDuration:(double)arg2 onParent:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithTheme:(id)arg1;

@end

