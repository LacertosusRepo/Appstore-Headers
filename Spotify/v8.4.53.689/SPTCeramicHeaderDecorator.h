//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTCeramicViewController;

@interface SPTCeramicHeaderDecorator : NSObject
{
    id <SPTCeramicViewControllerViewProvider> _viewProvider;
    SPTCeramicViewController *_viewController;
}

@property(readonly, nonatomic) __weak SPTCeramicViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <SPTCeramicViewControllerViewProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
- (void).cxx_destruct;
- (void)populateAccessoryViewForHeader:(id)arg1 atIndex:(long long)arg2;
- (id)initWithViewController:(id)arg1;

@end

