//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEAccessoryIconButton.h"

@class NSNotificationCenter, SPTTheme;

@interface SPTPersonalisedSetsBanButton : GLUEAccessoryIconButton
{
    SPTTheme *_theme;
    NSNotificationCenter *_notificationCentre;
}

@property(readonly, nonatomic) NSNotificationCenter *notificationCentre; // @synthesize notificationCentre=_notificationCentre;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

