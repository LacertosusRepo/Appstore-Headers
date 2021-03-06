//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol SPTAlertAction, UIPopoverPresentationControllerDelegate;

@protocol SPTAlert <NSObject>
@property(nonatomic) __weak id <UIPopoverPresentationControllerDelegate> popoverPresentationControllerDelegate;
@property(readonly, nonatomic) NSArray *textFieldConfigurationHandlers;
@property(retain, nonatomic) id <SPTAlertAction> preferredAction;
@property(readonly, nonatomic) NSArray *actions;
@property(readonly, nonatomic) long long preferredStyle;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
- (void)addTextFieldWithConfigurationHandler:(void (^)(UITextField *))arg1;
- (void)addAction:(id <SPTAlertAction>)arg1;
@end

