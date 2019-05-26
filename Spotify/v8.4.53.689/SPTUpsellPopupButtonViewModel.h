//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SPTUpsell, SPTUpsellActionFactory, SPTUpsellButton;

@interface SPTUpsellPopupButtonViewModel : NSObject
{
    SPTUpsellButton *_button;
    SPTUpsell *_upsell;
    SPTUpsellActionFactory *_actionFactory;
    id <SPTUpsellLogger> _logger;
    id <SPTUpsellAction> _action;
}

@property(retain, nonatomic) id <SPTUpsellAction> action; // @synthesize action=_action;
@property(readonly, nonatomic) id <SPTUpsellLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTUpsellActionFactory *actionFactory; // @synthesize actionFactory=_actionFactory;
@property(readonly, nonatomic) SPTUpsell *upsell; // @synthesize upsell=_upsell;
@property(readonly, nonatomic) SPTUpsellButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)didTapButton;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
- (id)initWithButton:(id)arg1 upsell:(id)arg2 actionFactory:(id)arg3 logger:(id)arg4;

@end
