//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSlateDataSource-Protocol.h"
#import "SPTSlateDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol SPTSlate, SPTSlateBuilderProvider, SPTSlateManager;

@interface SPTHomeMixFacepileDetailPresenter : NSObject <SPTSlateDelegate, SPTSlateDataSource>
{
    id <SPTSlateManager> _slateManager;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    UIViewController *_contentViewController;
    id <SPTSlate> _slate;
}

@property(retain, nonatomic) id <SPTSlate> slate; // @synthesize slate=_slate;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(retain, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
- (void).cxx_destruct;
- (id)dismissTextForSlate:(id)arg1;
- (_Bool)shouldHideImageForSlate:(id)arg1;
- (_Bool)isIpad;
- (id)provideSlate;
- (void)present;
- (id)contentUnitForSlateViewController:(id)arg1;
- (id)initWithSlateManager:(id)arg1 slateBuilderProvider:(id)arg2 contentViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

