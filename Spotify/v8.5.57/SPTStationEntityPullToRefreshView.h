//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class NSString, UIActivityIndicatorView, UIImageView, UILabel, UITableView;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTStationEntityPullToRefreshView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    unsigned long long _state;
    double _scrollOffset;
    UIImageView *_iconView;
    UILabel *_message;
    UITableView *_tableView;
    UIActivityIndicatorView *_activityIndicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *message; // @synthesize message=_message;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) double scrollOffset; // @synthesize scrollOffset=_scrollOffset;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)configureForLoadingState;
- (void)configureForActiveState;
- (void)configureForInactiveState;
- (void)resetStateIfNeeded;
- (void)beginLoading;
- (void)stopActivating;
- (void)beginActivating;
- (id)arrowIconWhite;
- (id)arrowIcon;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

