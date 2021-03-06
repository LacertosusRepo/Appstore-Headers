//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, SPTPopupDialog, SPTPopupWindow;

@interface SPTPopupManager : NSObject
{
    id <SPTPopupTheme> _theme;
    SPTPopupWindow *_window;
    NSMutableArray *_presentationQueue;
    SPTPopupDialog *_presentedPopup;
}

+ (id)sharedManager;
@property(retain, nonatomic) SPTPopupDialog *presentedPopup; // @synthesize presentedPopup=_presentedPopup;
@property(readonly, nonatomic) NSMutableArray *presentationQueue; // @synthesize presentationQueue=_presentationQueue;
@property(retain, nonatomic) SPTPopupWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) id <SPTPopupTheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)loadWindow;
- (void)dismissPresentedPopupDialogAndClearQueue:(_Bool)arg1 animate:(_Bool)arg2;
- (void)dismissPopupDialog:(id)arg1 animate:(_Bool)arg2;
- (void)dismissPopupDialog:(id)arg1;
- (_Bool)presentPopupDialog:(id)arg1;
- (void)presentNextQueuedPopup;
- (void)changePopupDialog:(id)arg1 toNewState:(long long)arg2;
- (void)didDismissPopup:(id)arg1;
- (void)willDismissPopup:(id)arg1;
- (void)didPresentPopup:(id)arg1;
- (void)willPresentPopup:(id)arg1;
- (_Bool)isPresentingPopup:(id)arg1;
- (_Bool)isPresentingPopup;
- (id)init;

@end

