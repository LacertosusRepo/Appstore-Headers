//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPAction.h"

@class NSString, NSURL;
@protocol SPTLogCenter, SPTModalPresentationController, SPTPodcastSpeedControlManager;

@interface SPTContextMenuSpeedControlAction : SPAction
{
    NSString *_logEventName;
    id <SPTPodcastSpeedControlManager> _speedControlManager;
    id <SPTModalPresentationController> _modalPresentationController;
    NSURL *_episodeURI;
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) NSURL *episodeURI; // @synthesize episodeURI=_episodeURI;
@property(retain, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(retain, nonatomic) id <SPTPodcastSpeedControlManager> speedControlManager; // @synthesize speedControlManager=_speedControlManager;
- (id)logEventName;
- (void).cxx_destruct;
- (void)logSpeedControlSelected;
- (id)execute:(id)arg1;
- (id)imageStyle;
- (id)image;
- (id)title;
- (id)initWithPodcastSpeedControlManager:(id)arg1 modalPresentationController:(id)arg2 episodeURI:(id)arg3 logContext:(id)arg4 logCenter:(id)arg5;

@end
