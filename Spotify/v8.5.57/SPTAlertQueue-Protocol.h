//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTAlert, SPTAlertQueueOperation, SPTAlertToken;

@protocol SPTAlertQueue <NSObject>
- (id <SPTAlertToken>)queueOperation:(id <SPTAlertQueueOperation>)arg1;
- (id <SPTAlertToken>)queueAlert:(id <SPTAlert>)arg1;
@end

