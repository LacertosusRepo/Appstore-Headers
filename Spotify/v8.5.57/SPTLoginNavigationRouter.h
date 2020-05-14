//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNavigationRouter-Protocol.h"

@class NSString, SPNavigationController;
@protocol SPTNavigationRouter;

@interface SPTLoginNavigationRouter : NSObject <SPTNavigationRouter>
{
    SPNavigationController *_navigationControllerOverride;
    id <SPTNavigationRouter> _navigationRouter;
}

@property(retain, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(nonatomic) __weak SPNavigationController *navigationControllerOverride; // @synthesize navigationControllerOverride=_navigationControllerOverride;
- (void).cxx_destruct;
- (id)vcForLink:(id)arg1 useCurrentStack:(_Bool)arg2 referrer:(id)arg3;
- (id)selectTabAndPushViewControllerForLink:(id)arg1 options:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)pushViewControllerForLink:(id)arg1 options:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isViewController:(id)arg1 validForURL:(id)arg2;
- (id)findExistingViewControllerForViewURI:(id)arg1;
- (id)initWithNavigationRouter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

