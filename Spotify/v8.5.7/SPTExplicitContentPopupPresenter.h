//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTExplicitContentTheme, SPTPopupManager;

@interface SPTExplicitContentPopupPresenter : NSObject
{
    SPTPopupManager *_popupManager;
    SPTExplicitContentTheme *_theme;
}

@property(readonly, nonatomic) SPTExplicitContentTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
- (void).cxx_destruct;
- (void)presentPopupWithTitle:(id)arg1 message:(id)arg2 buttons:(id)arg3;
- (id)initWithPopupManager:(id)arg1 theme:(id)arg2;

@end

