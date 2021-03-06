//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInstrumentationInteractionInformation-Protocol.h"

@class NSString, UIEvent, UIView, UIViewController;
@protocol SPTPageController;

@interface SPTInstrumentationInteractionInformationImplementation : NSObject <SPTInstrumentationInteractionInformation>
{
    _Bool _hasPreviouslyTraversed;
    UIView *_view;
    NSString *_interactionID;
    UIViewController<SPTPageController> *_pageControllerForView;
    UIEvent *_event;
}

@property(nonatomic) _Bool hasPreviouslyTraversed; // @synthesize hasPreviouslyTraversed=_hasPreviouslyTraversed;
@property(nonatomic) __weak UIEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) UIViewController<SPTPageController> *pageControllerForView; // @synthesize pageControllerForView=_pageControllerForView;
@property(copy, nonatomic) NSString *interactionID; // @synthesize interactionID=_interactionID;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)instrumentableOrdinalViewsWithTerminatingView:(id)arg1;
- (struct CGPoint)interactionPointInView:(id)arg1;
- (id)initWithEvent:(id)arg1 interactionID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

