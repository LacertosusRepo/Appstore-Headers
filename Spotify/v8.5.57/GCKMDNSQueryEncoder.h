//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCKMDNSQueryEncoder : NSObject
{
    unsigned long long _maxQuerySize;
}

- (id)encodeQueryForQuestions:(id)arg1 unicastResponse:(_Bool)arg2 transactionID:(unsigned short)arg3;
- (void)buildBrowseQueryQuestionsForServiceType:(id)arg1 subtypes:(id)arg2 addTo:(id)arg3;
- (id)initWithMaxPacketSize:(unsigned long long)arg1;

@end
