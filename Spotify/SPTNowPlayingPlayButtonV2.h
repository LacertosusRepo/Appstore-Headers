//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingButton.h"

#import "SPTNowPlayingPlayButton.h"

@class NSString, UIColor;

@interface SPTNowPlayingPlayButtonV2 : SPTNowPlayingButton <SPTNowPlayingPlayButton>
{
    _Bool filled;
    UIColor *fillColor;
    UIColor *_circleColor;
    double _circleLineWidth;
    struct CGSize _circleSize;
    struct UIEdgeInsets _touchInsets;
}

+ (id)button;
@property(nonatomic) double circleLineWidth; // @synthesize circleLineWidth=_circleLineWidth;
@property(retain, nonatomic) UIColor *circleColor; // @synthesize circleColor=_circleColor;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
@property(nonatomic) struct CGSize circleSize; // @synthesize circleSize=_circleSize;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor;
@property(nonatomic, getter=isFilled) _Bool filled; // @synthesize filled;
- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, copy) NSString *description;
- (void)applyIcon;
@property(nonatomic, getter=isPlaying) _Bool playing;

// Remaining properties
@property(nonatomic) unsigned long long buttonState; // @dynamic buttonState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

