//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@interface SPTTermsAndConditionsUpdateLinkPresenter : NSObject
{
    _Bool _presenting;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTAlertController> _alertController;
    UIViewController *_modalViewController;
    CDUnknownBlockType _completion;
}

@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UIViewController *modalViewController; // @synthesize modalViewController=_modalViewController;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (void)closeButtonItemPressed:(id)arg1;
- (void)presentLink:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithLinkDispatcher:(id)arg1 alertController:(id)arg2;

@end

