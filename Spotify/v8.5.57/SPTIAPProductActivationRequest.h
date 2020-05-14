//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;
@protocol SPTIAPProductActivationRequestDelegate;

@interface SPTIAPProductActivationRequest : NSObject
{
    id <SPTIAPProductActivationRequestDelegate> _delegate;
    NSData *_receiptData;
}

+ (id)requestWithReceiptData:(id)arg1 dataLoaderFactory:(id)arg2 applicationVersionString:(id)arg3;
+ (id)requestWithReceiptData:(id)arg1 hermesController:(id)arg2 applicationVersionString:(id)arg3;
@property(readonly, nonatomic) NSData *receiptData; // @synthesize receiptData=_receiptData;
@property(nonatomic) __weak id <SPTIAPProductActivationRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)parseResponseData:(id)arg1 error:(id *)arg2;
- (void)start;
- (id)initWithReceiptData:(id)arg1;

@end

