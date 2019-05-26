//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSURL, UIView, UIViewController;
@protocol SPTShowContextMenuControllerOptions;

@protocol SPTPodcastContextMenuProvider <NSObject>
- (id <SPTShowContextMenuControllerOptions>)provideShowContextMenuControllerOptions;
- (void)presentContextMenuForEpisodeURI:(NSURL *)arg1 withMetadata:(NSDictionary *)arg2 sourceContextURI:(NSURL *)arg3 inViewController:(UIViewController *)arg4 senderView:(UIView *)arg5 options:(id <SPTShowContextMenuControllerOptions>)arg6;
@end

