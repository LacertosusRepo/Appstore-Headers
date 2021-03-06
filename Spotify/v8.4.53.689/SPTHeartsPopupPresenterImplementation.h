//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHeartsPopupPresenter.h"

@class NSLayoutConstraint, NSString, NSTimer, SPTHeartsContextURI, SPTHeartsPopupTheme, SPTHeartsPopupView, SPTHeartsTrackURI, UITapGestureRecognizer, UIView;

@interface SPTHeartsPopupPresenterImplementation : NSObject <SPTHeartsPopupPresenter>
{
    _Bool _popupPresented;
    id <SPTHeartsPopupPresenterDelegate> _delegate;
    SPTHeartsPopupTheme *_theme;
    NSLayoutConstraint *_verticalAlignmentConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSTimer *_presentationTimer;
    UITapGestureRecognizer *_tapRecognizer;
    id <GLUEImageLoader> _glueImageLoader;
    id <SPTLogCenter> _logCenter;
    UIView *_popupContainerView;
    SPTHeartsPopupView *_currentPopupView;
    SPTHeartsContextURI *_presentedContextURI;
    SPTHeartsTrackURI *_presentedTrackURI;
}

@property(copy, nonatomic) SPTHeartsTrackURI *presentedTrackURI; // @synthesize presentedTrackURI=_presentedTrackURI;
@property(copy, nonatomic) SPTHeartsContextURI *presentedContextURI; // @synthesize presentedContextURI=_presentedContextURI;
@property(retain, nonatomic) SPTHeartsPopupView *currentPopupView; // @synthesize currentPopupView=_currentPopupView;
@property(retain, nonatomic) UIView *popupContainerView; // @synthesize popupContainerView=_popupContainerView;
@property(nonatomic, getter=isPopupPresented) _Bool popupPresented; // @synthesize popupPresented=_popupPresented;
@property(nonatomic) __weak id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) NSTimer *presentationTimer; // @synthesize presentationTimer=_presentationTimer;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *verticalAlignmentConstraint; // @synthesize verticalAlignmentConstraint=_verticalAlignmentConstraint;
@property(retain, nonatomic) SPTHeartsPopupTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTHeartsPopupPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)undoTapped:(id)arg1;
- (void)userDidTapPopupView:(id)arg1;
- (void)presentationDidFinish:(id)arg1;
- (void)showUndoMessageAndDismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)hidePopupWithCompletion:(CDUnknownBlockType)arg1;
- (void)showPopupWithRecommendations:(id)arg1 forContextURI:(id)arg2 trackURI:(id)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)dismissPresentedPopupWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentPopupWithRecommendations:(id)arg1 forContextURI:(id)arg2 trackURI:(id)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 imageLoader:(id)arg2 logCenter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

