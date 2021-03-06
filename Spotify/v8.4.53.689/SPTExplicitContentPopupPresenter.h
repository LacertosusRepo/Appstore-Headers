//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

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

