//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GSCRpcErrorHandler.h"

@class NSString;

@interface GSCRpcDefaultErrorHandler : NSObject <GSCRpcErrorHandler>
{
}

+ (id)sharedInstance;
- (id)handleError:(id)arg1 forRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
