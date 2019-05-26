//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingMode-Protocol.h"

@class NSString;
@protocol SPTNowPlayingModeLayoutDelegate, SPTNowPlayingModeViewControllerRegistry;

@interface SPTNowPlayingFreeMode : NSObject <SPTNowPlayingMode>
{
    id <SPTNowPlayingModeLayoutDelegate> _layoutDelegate;
    id <SPTNowPlayingModeViewControllerRegistry> _viewControllerRegistry;
}

@property(readonly, nonatomic) id <SPTNowPlayingModeViewControllerRegistry> viewControllerRegistry; // @synthesize viewControllerRegistry=_viewControllerRegistry;
@property(nonatomic) __weak id <SPTNowPlayingModeLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (id)queueHeadUnitViewController;
- (id)footerUnitViewController;
- (id)headUnitViewController;
- (id)durationUnitViewController;
- (id)informationUnitViewController;
- (id)navigationBarUnitViewController;
- (id)identifier;
- (id)initWithViewControllerRegistry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

