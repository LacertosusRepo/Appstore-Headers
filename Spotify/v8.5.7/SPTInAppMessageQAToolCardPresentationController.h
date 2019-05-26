//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageQAToolCardMessageControllerDelegate-Protocol.h"
#import "SPTSlateDataSource-Protocol.h"
#import "SPTSlateDelegate-Protocol.h"
#import "SPTSlateViewDelegate-Protocol.h"

@class NSString, SPTInAppMessageQAToolCardMessageController;
@protocol SPTSlate, SPTSlateBuilderProvider, SPTSlateManager;

@interface SPTInAppMessageQAToolCardPresentationController : NSObject <SPTSlateDelegate, SPTSlateDataSource, SPTSlateViewDelegate, SPTInAppMessageQAToolCardMessageControllerDelegate>
{
    _Bool _presented;
    SPTInAppMessageQAToolCardMessageController *_cardMessageController;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    id <SPTSlateManager> _slateManager;
    id <SPTSlate> _slate;
}

@property(retain, nonatomic) id <SPTSlate> slate; // @synthesize slate=_slate;
@property(nonatomic, getter=isPresented) _Bool presented; // @synthesize presented=_presented;
@property(retain, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(retain, nonatomic) id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(retain, nonatomic) SPTInAppMessageQAToolCardMessageController *cardMessageController; // @synthesize cardMessageController=_cardMessageController;
- (void).cxx_destruct;
- (id)provideSlate;
- (void)actionReceivedWithValue:(id)arg1;
- (void)dismissTriggerMessageContentUnit;
- (_Bool)presentMessage;
- (_Bool)slateShouldOnlyDismissOnFooterTap:(id)arg1;
- (_Bool)slateShouldDismiss:(id)arg1;
- (id)dismissTextForSlate:(id)arg1;
- (id)titleForSlate:(id)arg1;
- (void)slateViewControllerPositionChanged:(struct CGPoint)arg1;
- (void)slateViewControllerDismissed:(id)arg1 swipeDirection:(struct CGPoint)arg2;
- (void)slateDidDismiss:(id)arg1;
- (_Bool)shouldFullscreen;
- (id)contentUnitForSlateViewController:(id)arg1;
- (_Bool)isIpad;
- (id)initWithCardMessageController:(id)arg1 slateBuilderProvider:(id)arg2 slateManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

