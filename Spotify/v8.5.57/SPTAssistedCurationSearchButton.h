//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "GLUEStyleable-Protocol.h"

@class NSString, SPTEncoreTypeStyle;
@protocol SPTAssistedCurationSearchButtonDelegate;

@interface SPTAssistedCurationSearchButton : UIButton <GLUEStyleable>
{
    id <SPTAssistedCurationSearchButtonDelegate> _delegate;
    SPTEncoreTypeStyle *_titleStyle;
}

@property(retain, nonatomic) SPTEncoreTypeStyle *titleStyle; // @synthesize titleStyle=_titleStyle;
@property(nonatomic) __weak id <SPTAssistedCurationSearchButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapSearchButton;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)glue_applyStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

