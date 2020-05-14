//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SPTask, UIView, UIViewController;
@protocol SPTContextMenuPresenterFactory;

@protocol SPTSleepTimerContextMenuActionsProvider <NSObject>
- (SPTask *)viewSleepTimerOptionsWithViewController:(UIViewController *)arg1 senderView:(UIView *)arg2 contextMenuPresenter:(id <SPTContextMenuPresenterFactory>)arg3 logContext:(NSString *)arg4 isPodcastContext:(_Bool)arg5;
- (NSString *)contextMenuTitle;
- (NSArray *)allActionsForTracks;
- (NSArray *)allActionsForPodcasts;
@end

