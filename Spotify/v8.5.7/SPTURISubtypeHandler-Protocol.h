//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTURIDispatchContext;

@protocol SPTURISubtypeHandler <NSObject>
- (long long)URISubtypeHandlerOpenURI:(NSURL *)arg1 context:(id <SPTURIDispatchContext>)arg2;
- (_Bool)URISubtypeHandlerCanHandleURI:(NSURL *)arg1;
@end
