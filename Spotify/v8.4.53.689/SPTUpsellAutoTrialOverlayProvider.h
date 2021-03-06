//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSlateDataSource.h"
#import "SPTSlateDelegate.h"

@class NSString, SPTUpsellGLUETheme;

@interface SPTUpsellAutoTrialOverlayProvider : NSObject <SPTSlateDelegate, SPTSlateDataSource>
{
    unsigned long long _trialState;
    id <SPTUpsellOverlayContentViewDelegate> _contentUnitDelegate;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    SPTUpsellGLUETheme *_theme;
    id <SPTSlate> _slate;
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) id <SPTSlate> slate; // @synthesize slate=_slate;
@property(retain, nonatomic) SPTUpsellGLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) __weak id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(nonatomic) __weak id <SPTUpsellOverlayContentViewDelegate> contentUnitDelegate; // @synthesize contentUnitDelegate=_contentUnitDelegate;
@property(nonatomic) unsigned long long trialState; // @synthesize trialState=_trialState;
- (void).cxx_destruct;
- (id)provideSlate;
- (_Bool)slateViewControllerShouldDismissOnSwipe:(id)arg1;
- (_Bool)slateShouldDismissContainer:(id)arg1;
- (_Bool)slateShouldDismiss:(id)arg1;
- (id)contentUnitForSlateViewController:(id)arg1;
- (id)initWithSlateBuilderProvider:(id)arg1 trialState:(unsigned long long)arg2 theme:(id)arg3 logCenter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

