//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface SPTWebGateRequest : NSObject
{
    struct optional<double> _timeout;
    NSString *_endpoint;
    NSString *_method;
    NSDictionary *_headers;
    NSData *_body;
}

@property(readonly, nonatomic) NSData *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) NSString *method; // @synthesize method=_method;
@property(readonly, nonatomic) NSString *endpoint; // @synthesize endpoint=_endpoint;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct Request cppRequest;
- (optional_331450e3)cppTimeout;
@property(nonatomic) double timeout;
- (id)initWithEndpoint:(id)arg1 usingMethod:(id)arg2 withHeaders:(id)arg3 withBody:(id)arg4;
- (id)initWithEndpoint:(id)arg1 usingMethod:(id)arg2;
- (id)initWithEndpoint:(id)arg1;

@end

