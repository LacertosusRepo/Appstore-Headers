//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol INSMessageProtocol;

@protocol INSSchedulerProtocol <NSObject>
- (_Bool)scheduleNonAuthenticatedMessage:(id <INSMessageProtocol>)arg1 error:(id *)arg2;
- (_Bool)scheduleAuthenticatedMessage:(id <INSMessageProtocol>)arg1 error:(id *)arg2;
@end
