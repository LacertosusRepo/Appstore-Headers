//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSAScreenCaptureWindowSource.h"
#import "MySpinTouchInjectionWindowSource.h"

@class MSAExternalWindow, MSAKeyboardWindow, MSAMetricsWindow, NSMutableArray, NSString, UIWindow;

@interface MSAWindowManager : NSObject <MSAScreenCaptureWindowSource, MySpinTouchInjectionWindowSource>
{
    NSMutableArray *relevantWindows;
    MSAExternalWindow *_externalWindow;
    UIWindow *_internalConnectedWindow;
    MSAKeyboardWindow *_keyboardWindow;
    MSAMetricsWindow *_metricsWindow;
}

@property(retain, nonatomic) MSAMetricsWindow *metricsWindow; // @synthesize metricsWindow=_metricsWindow;
@property(retain, nonatomic) MSAKeyboardWindow *keyboardWindow; // @synthesize keyboardWindow=_keyboardWindow;
@property(retain, nonatomic) UIWindow *internalConnectedWindow; // @synthesize internalConnectedWindow=_internalConnectedWindow;
@property(retain, nonatomic) MSAExternalWindow *externalWindow; // @synthesize externalWindow=_externalWindow;
- (void).cxx_destruct;
@property(readonly) struct CGSize captureSize;
- (id)windowsForCapturing;
- (id)relevantWindows;
- (void)windowDidBecomeHidden:(id)arg1;
- (void)windowDidBecomeVisible:(id)arg1;
- (void)buildRelevantWindowsList;
- (void)moveToExternalScreen:(id)arg1;
- (_Bool)shouldMoveToExternalScreen:(id)arg1;
- (_Bool)isRelevantWindow:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

