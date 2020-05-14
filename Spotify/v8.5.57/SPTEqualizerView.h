//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class NSString, SPTEqualizerColumnView, SPTInfoView, SPTTableView;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTEqualizerView : UIView <SPTThemableView>
{
    _Bool _showConnectInfoView;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    SPTEqualizerColumnView *_columnView;
    SPTTableView *_tableView;
    SPTInfoView *_infoView;
}

+ (id)equalizerViewWithValues:(id)arg1;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(nonatomic) _Bool showConnectInfoView; // @synthesize showConnectInfoView=_showConnectInfoView;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTEqualizerColumnView *columnView; // @synthesize columnView=_columnView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)applyThemeLayout;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 values:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

