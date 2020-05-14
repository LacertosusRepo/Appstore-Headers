//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTPageController-Protocol.h"

@class GLUEButton, GLUELabel, NSString, NSURL;
@protocol GLUETheme, SPTPageContainer;

@interface SPTCarmageddonFeedbackViewController : UIViewController <SPTPageController>
{
    NSString *pageIdentifier;
    id <GLUETheme> _glueTheme;
    GLUELabel *_titleLabel;
    GLUELabel *_questionLabel;
    GLUEButton *_confirmButton;
    GLUEButton *_denyButton;
    CDUnknownBlockType _confirmHandler;
    CDUnknownBlockType _denyHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType denyHandler; // @synthesize denyHandler=_denyHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType confirmHandler; // @synthesize confirmHandler=_confirmHandler;
@property(readonly, nonatomic) GLUEButton *denyButton; // @synthesize denyButton=_denyButton;
@property(readonly, nonatomic) GLUEButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(readonly, nonatomic) GLUELabel *questionLabel; // @synthesize questionLabel=_questionLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier; // @synthesize pageIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)denyButtonTapped;
- (void)confirmButtonTapped;
- (void)setupConstraints;
- (void)setupSubviews;
- (void)viewDidLoad;
- (id)initWithGLUETheme:(id)arg1 confirmHandler:(CDUnknownBlockType)arg2 denyHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

