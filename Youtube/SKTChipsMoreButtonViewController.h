//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GOOPopoverViewControllerDelegate.h"

@class GOOPopoverViewController, NSString, SKTChipsMoreMenuViewController;

@interface SKTChipsMoreButtonViewController : UIViewController <GOOPopoverViewControllerDelegate>
{
    id <SKTSelectedContactsDisplayOptions> _options;
    SKTChipsMoreMenuViewController *_menuViewController;
    GOOPopoverViewController *_activePopover;
}

@property(retain, nonatomic) GOOPopoverViewController *activePopover; // @synthesize activePopover=_activePopover;
@property(readonly, nonatomic) SKTChipsMoreMenuViewController *menuViewController; // @synthesize menuViewController=_menuViewController;
@property(readonly, nonatomic) id <SKTSelectedContactsDisplayOptions> options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)moreButtonTapped;
- (void)popoverViewControllerDidCancel:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)loadView;
- (id)initWithOptions:(id)arg1 analyticsProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

