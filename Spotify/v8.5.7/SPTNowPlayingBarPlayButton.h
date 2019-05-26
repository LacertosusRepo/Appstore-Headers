//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingPlayButton.h"

#import "SPTNowPlayingBarPlayButton-Protocol.h"

@class NSString, UIColor;

@interface SPTNowPlayingBarPlayButton : SPTNowPlayingPlayButton <SPTNowPlayingBarPlayButton>
{
    UIColor *_circleColor;
    double _circleLineWidth;
    struct CGSize _circleSize;
    struct UIEdgeInsets _touchInsets;
}

@property(nonatomic) double circleLineWidth; // @synthesize circleLineWidth=_circleLineWidth;
@property(retain, nonatomic) UIColor *circleColor; // @synthesize circleColor=_circleColor;
@property(nonatomic) struct CGSize circleSize; // @synthesize circleSize=_circleSize;
@property(nonatomic) struct UIEdgeInsets touchInsets;
- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIColor *fillColor;
@property(nonatomic, getter=isFilled) _Bool filled;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isPlaying) _Bool playing;
@property(readonly) Class superclass;

@end

