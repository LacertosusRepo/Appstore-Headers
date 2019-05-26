//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTReminderHandlerService-Protocol.h"

@class NSString, SPTAllocationContext, SPTReminder;
@protocol SPTContainerUIService, SPTReminderHandler, SPTURIDispatchService;

@interface SPTReminderHandlerServiceImplementation : NSObject <SPTReminderHandlerService>
{
    id <SPTContainerUIService> _containerUIService;
    id <SPTURIDispatchService> _uriDispatchService;
    SPTReminder *_reminder;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTReminder *reminder; // @synthesize reminder=_reminder;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTReminderHandler> reminderHandler;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

