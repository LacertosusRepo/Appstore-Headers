//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInstrumentationNavigationNotifierProtocol-Protocol.h"

@class NSString;
@protocol SPTInstrumentationServiceMessagingHandler, SPTPageController;

@interface SPTInstrumentationNavigationPageContainer : NSObject <SPTInstrumentationNavigationNotifierProtocol>
{
    id <SPTPageController> _currentPageController;
    id <SPTInstrumentationServiceMessagingHandler> _messagingHandler;
}

@property(nonatomic) __weak id <SPTInstrumentationServiceMessagingHandler> messagingHandler; // @synthesize messagingHandler=_messagingHandler;
@property(retain, nonatomic, getter=spt_currentPageController) id <SPTPageController> currentPageController; // @synthesize currentPageController=_currentPageController;
- (void).cxx_destruct;
- (void)navigationManager:(id)arg1 didNavigateFromViewController:(id)arg2 toViewController:(id)arg3;
- (id)updatePageViewControllerToViewController:(id)arg1;
- (id)initWithInitialViewController:(id)arg1 messagingHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

