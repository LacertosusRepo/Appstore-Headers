//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTIAPProductActivationRequest.h"

@class NSString, SPTHermesController;

@interface SPTIAPProductActivationHermesRequest : SPTIAPProductActivationRequest
{
    SPTHermesController *_hermesController;
    NSString *_applicationVersionString;
}

@property(readonly, nonatomic) NSString *applicationVersionString; // @synthesize applicationVersionString=_applicationVersionString;
@property(readonly, nonatomic) SPTHermesController *hermesController; // @synthesize hermesController=_hermesController;
- (void).cxx_destruct;
- (void)start;
- (id)initWithReceiptData:(id)arg1 hermesController:(id)arg2 applicationVersionString:(id)arg3;

@end

