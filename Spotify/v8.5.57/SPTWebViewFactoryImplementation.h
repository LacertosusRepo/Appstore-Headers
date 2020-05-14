//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWebViewFactory-Protocol.h"

@class NSString, SPSession;
@protocol SPTLinkDispatcher, SPTModalPresentationController;

@interface SPTWebViewFactoryImplementation : NSObject <SPTWebViewFactory>
{
    SPSession *_session;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTModalPresentationController> _modalPresentationController;
}

@property(nonatomic) __weak id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)createWebViewControllerWithURL:(id)arg1 authenticate:(_Bool)arg2 pageURI:(id)arg3 pageIdentifier:(id)arg4 hideNavigationContentAndControls:(_Bool)arg5;
- (id)createWebViewControllerWithURL:(id)arg1 authenticate:(_Bool)arg2 pageURI:(id)arg3 pageIdentifier:(id)arg4 navigationItemsType:(long long)arg5;
- (id)createWebViewControllerWithURL:(id)arg1 authenticate:(_Bool)arg2;
- (id)createWebViewControllerWithURL:(id)arg1;
- (id)initWithSession:(id)arg1 linkDispatcher:(id)arg2 modalPresentationController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

