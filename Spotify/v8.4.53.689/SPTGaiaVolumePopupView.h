//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, NSTimer, SPTGaiaVolumeView, UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface SPTGaiaVolumePopupView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _animating;
    UIView *_backgroundView;
    UIImageView *_popupView;
    SPTGaiaVolumeView *_volumeView;
    UIPanGestureRecognizer *_interactionRecognizer;
    UITapGestureRecognizer *_dismissRecognizer;
    NSTimer *_dismissTimer;
}

+ (id)volumePopup;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) NSTimer *dismissTimer; // @synthesize dismissTimer=_dismissTimer;
@property(retain, nonatomic) UITapGestureRecognizer *dismissRecognizer; // @synthesize dismissRecognizer=_dismissRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *interactionRecognizer; // @synthesize interactionRecognizer=_interactionRecognizer;
@property(retain, nonatomic) SPTGaiaVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(retain, nonatomic) UIImageView *popupView; // @synthesize popupView=_popupView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)dismissTimerFired;
- (void)handleDismissGesture:(id)arg1;
- (void)handleInteractionGesture:(id)arg1;
- (void)dismissPopupAnimated:(_Bool)arg1;
- (struct CGRect)volumeFrameForPopupFrame:(struct CGRect)arg1;
- (struct CGRect)popupFrameFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)presentPopupFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

