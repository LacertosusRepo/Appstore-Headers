//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface EventSenderInternalErrorNonAuth : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *errorContext; // @dynamic errorContext;
@property(copy, nonatomic) NSString *errorMessage; // @dynamic errorMessage;
@property(copy, nonatomic) NSString *errorType; // @dynamic errorType;
@property(nonatomic) _Bool hasErrorContext; // @dynamic hasErrorContext;
@property(nonatomic) _Bool hasErrorMessage; // @dynamic hasErrorMessage;
@property(nonatomic) _Bool hasErrorType; // @dynamic hasErrorType;

@end

