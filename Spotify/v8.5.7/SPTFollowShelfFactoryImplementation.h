//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFollowShelfFactory-Protocol.h"

@class NSString, SPTFollowShelfViewController, SPTFollowShelfViewModel;
@protocol SPTFollowShelfFactoryDelegate;

@interface SPTFollowShelfFactoryImplementation : NSObject <SPTFollowShelfFactory>
{
    SPTFollowShelfViewModel *_viewModel;
    SPTFollowShelfViewController *_viewController;
}

@property(retain, nonatomic) SPTFollowShelfViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) SPTFollowShelfViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTFollowShelfFactoryDelegate> delegate;
- (id)configureFollowShelfViewControllerWithTitle:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

