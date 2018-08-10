//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIProgressView;

@interface SPTConcertsEntityProgressView : UIView
{
    _Bool _hasFinishedLoading;
    NSTimer *_timer;
    UIProgressView *_progressView;
}

@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool hasFinishedLoading; // @synthesize hasFinishedLoading=_hasFinishedLoading;
- (void).cxx_destruct;
- (float)newProgressValue;
- (void)incrementProgress;
- (void)finishLoading;
- (void)startLoading;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

