//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUBComponentView.h"

@class MISSING_TYPE;
@protocol HUBComponentEventHandler;

@interface _TtC21FollowFeedFeatureImpl32StaticReleaseComponentViewBinder : HUBComponentView
{
    MISSING_TYPE *eventHandler;
    MISSING_TYPE *theme;
    MISSING_TYPE *releaseView;
    MISSING_TYPE *$__lazy_storage_$_contentViewClickBehavior;
    MISSING_TYPE *observers;
    MISSING_TYPE *logger;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)contextMenuButtonClickedWithSender:(id)arg1;
- (void)playButtonClicked;
- (void)artistAvatarClicked;
- (void)configureWithModel:(id)arg1;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)dealloc;
@property(nonatomic) __weak id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler;

@end

