//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKProductsRequestDelegate-Protocol.h"

@class NSSet, NSString, SKProductsRequest, SKProductsResponse;
@protocol SPTIAPItunesProductRequestDelegate;

@interface SPTIAPItunesProductRequest : NSObject <SKProductsRequestDelegate>
{
    id <SPTIAPItunesProductRequestDelegate> _delegate;
    NSSet *_productIdentifiers;
    SKProductsRequest *_productRequest;
    SKProductsResponse *_returnedResponse;
}

@property(retain, nonatomic) SKProductsResponse *returnedResponse; // @synthesize returnedResponse=_returnedResponse;
@property(retain, nonatomic) SKProductsRequest *productRequest; // @synthesize productRequest=_productRequest;
@property(readonly, nonatomic) NSSet *productIdentifiers; // @synthesize productIdentifiers=_productIdentifiers;
@property(nonatomic) __weak id <SPTIAPItunesProductRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)start;
- (void)dealloc;
- (id)initWithProductIdentifiers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

