//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTTooltipPresentationManager.h"

@class NSString, SPTTheme, SPTTooltipView, SPTTooltipWindow, UIView;

@interface SPTTooltipPresentationManagerImplementation : NSObject <SPTTooltipPresentationManager>
{
    SPTTooltipWindow *_tooltipWindow;
    SPTTooltipView *_tooltipView;
    SPTTheme *_theme;
    UIView *_anchorView;
    id <SPTTooltipItem> _item;
    CDUnknownBlockType _statusChangeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType statusChangeBlock; // @synthesize statusChangeBlock=_statusChangeBlock;
@property(retain, nonatomic) id <SPTTooltipItem> item; // @synthesize item=_item;
@property(retain, nonatomic) UIView *anchorView; // @synthesize anchorView=_anchorView;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTTooltipView *tooltipView; // @synthesize tooltipView=_tooltipView;
@property(retain, nonatomic) SPTTooltipWindow *tooltipWindow; // @synthesize tooltipWindow=_tooltipWindow;
- (void).cxx_destruct;
- (void)dismissTooltip;
- (_Bool)isPresentingTooltipView:(id)arg1;
- (id)currentlyPresentedItem;
- (_Bool)isPresentingItem;
- (void)dismissCurrentItemAnimated:(_Bool)arg1;
- (_Bool)presentItem:(id)arg1 anchorView:(id)arg2 animated:(_Bool)arg3 statusChangeBlock:(CDUnknownBlockType)arg4;
- (void)handleBackgroundTap:(id)arg1;
- (void)presentAnimated:(_Bool)arg1 statusChangeBlock:(CDUnknownBlockType)arg2;
- (void)presentTooltip:(_Bool)arg1 statusChangeBlock:(CDUnknownBlockType)arg2;
- (void)prepareToPresentInteractiveTooltip:(id)arg1;
- (void)prepareToPresentDimmedNonInteractiveTooltip:(id)arg1;
- (id)provideMainWindow;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

