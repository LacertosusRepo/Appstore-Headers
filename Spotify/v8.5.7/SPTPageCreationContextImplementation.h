//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPageCreationContext-Protocol.h"

@class NSDictionary, NSString;
@protocol SPTLinkDispatcher;

@interface SPTPageCreationContextImplementation : NSObject <SPTPageCreationContext>
{
    id <SPTLinkDispatcher> _linkDispatcher;
    NSString *_referrerIdentifier;
    NSDictionary *_queryParameters;
}

@property(readonly, copy, nonatomic) NSDictionary *queryParameters; // @synthesize queryParameters=_queryParameters;
@property(readonly, copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (id)initWithLinkDispatcher:(id)arg1 referrerIdentifier:(id)arg2 queryParameters:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

