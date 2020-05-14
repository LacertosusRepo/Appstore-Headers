//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageTriggerConfigurationsControllerDelegate-Protocol.h"

@class NSString, SPTInAppMessageTriggerListParser;
@protocol SPTInAppMessageTriggerListControllerDelegate;

@interface SPTInAppMessageTriggerListController : NSObject <SPTInAppMessageTriggerConfigurationsControllerDelegate>
{
    id <SPTInAppMessageTriggerListControllerDelegate> _delegate;
    SPTInAppMessageTriggerListParser *_triggerListParser;
}

@property(retain, nonatomic) SPTInAppMessageTriggerListParser *triggerListParser; // @synthesize triggerListParser=_triggerListParser;
@property(nonatomic) __weak id <SPTInAppMessageTriggerListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)triggerConfigurationsController:(id)arg1 didFetchActiveTriggers:(id)arg2;
- (id)initWithTriggerListParser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

