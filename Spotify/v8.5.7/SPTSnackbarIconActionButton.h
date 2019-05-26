//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "GLUEStyleable-Protocol.h"

@class NSString, SPTSnackbarIconActionButtonStyle;

@interface SPTSnackbarIconActionButton : UIButton <GLUEStyleable>
{
    _Bool _shouldRefreshStyle;
    SPTSnackbarIconActionButtonStyle *_style;
    long long _icon;
    struct CGSize _iconSize;
}

@property(nonatomic) _Bool shouldRefreshStyle; // @synthesize shouldRefreshStyle=_shouldRefreshStyle;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(retain, nonatomic) SPTSnackbarIconActionButtonStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)setIcon:(long long)arg1 withSize:(struct CGSize)arg2;
- (void)glue_applyStyle:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

