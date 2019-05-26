//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTRequestAccounting : NSObject
{
    struct RequestAccountingSink _request_accounting_sink;
}

+ (id)requestAccountingWithSink:(struct RequestAccountingSink)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addRequestFromURL:(id)arg1 httpMethod:(id)arg2 sourceIdentifier:(id)arg3 bytesDownloaded:(int)arg4 bytesUploaded:(int)arg5 payloadSize:(int)arg6 timeTaken:(double)arg7;
- (id)initWithSink:(struct RequestAccountingSink)arg1;

@end

