//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSlateWireframe-Protocol.h"

@class NSString, UIWindow;
@protocol SPTSlateWireframeCustomPresentationDelegate;

@interface SPTSlateTopLevelWireframe : NSObject <SPTSlateWireframe>
{
    id <SPTSlateWireframeCustomPresentationDelegate> _delegate;
    UIWindow *_window;
}

@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(nonatomic) __weak id <SPTSlateWireframeCustomPresentationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissSlateViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentSlateViewController:(id)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
