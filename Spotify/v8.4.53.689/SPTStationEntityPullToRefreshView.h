//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTThemableView.h"

@class NSString, SPTLayoutConstraintBuilder, UIActivityIndicatorView, UIImageView, UILabel, UITableView;

@interface SPTStationEntityPullToRefreshView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    unsigned long long _state;
    double _scrollOffset;
    UIImageView *_iconView;
    UILabel *_message;
    UITableView *_tableView;
    UIActivityIndicatorView *_activityIndicator;
    SPTLayoutConstraintBuilder *_constraintBuilder;
}

@property(retain, nonatomic) SPTLayoutConstraintBuilder *constraintBuilder; // @synthesize constraintBuilder=_constraintBuilder;
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
- (id)layoutConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
