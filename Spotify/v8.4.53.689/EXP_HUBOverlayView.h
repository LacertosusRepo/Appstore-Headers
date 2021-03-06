//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "EXP_HUBComponentViewManagerDelegate.h"

@class EXP_HUBComponentViewImageLoader, EXP_HUBComponentViewManager, NSArray, NSMutableArray, NSString;

@interface EXP_HUBOverlayView : UIView <EXP_HUBComponentViewManagerDelegate>
{
    NSArray *_componentModels;
    id <EXP_HUBOverlayViewComponentDelegate> _componentDelegate;
    EXP_HUBComponentViewImageLoader *_componentViewImageLoader;
    EXP_HUBComponentViewManager *_componentViewManager;
    NSMutableArray *_overlayComponentViews;
    struct UIEdgeInsets _contentInset;
}

@property(readonly, nonatomic) NSMutableArray *overlayComponentViews; // @synthesize overlayComponentViews=_overlayComponentViews;
@property(readonly, nonatomic) EXP_HUBComponentViewManager *componentViewManager; // @synthesize componentViewManager=_componentViewManager;
@property(readonly, nonatomic) EXP_HUBComponentViewImageLoader *componentViewImageLoader; // @synthesize componentViewImageLoader=_componentViewImageLoader;
@property(nonatomic) __weak id <EXP_HUBOverlayViewComponentDelegate> componentDelegate; // @synthesize componentDelegate=_componentDelegate;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(copy, nonatomic) NSArray *componentModels; // @synthesize componentModels=_componentModels;
- (void).cxx_destruct;
- (void)componentViewManager:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)componentViewManager:(id)arg1 componentViewWillAppear:(id)arg2;
- (void)updateOverlayInteractivity;
- (void)componentViewsWillAppear;
- (void)configureComponentViews;
- (void)applyContentInsets;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 imageLoaderFactory:(id)arg2 componentRegistry:(id)arg3 componentEventHandler:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

