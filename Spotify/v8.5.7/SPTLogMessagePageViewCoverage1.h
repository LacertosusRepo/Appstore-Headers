//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessagePageViewCoverage1 : SPTLogMessage
{
    _Bool _coveredValue;
    NSString *_pageValue;
    NSString *_viewClassValue;
}

+ (id)messageWithPage:(id)arg1 viewClass:(id)arg2 covered:(_Bool)arg3;
@property(nonatomic) _Bool coveredValue; // @synthesize coveredValue=_coveredValue;
@property(copy, nonatomic) NSString *viewClassValue; // @synthesize viewClassValue=_viewClassValue;
@property(copy, nonatomic) NSString *pageValue; // @synthesize pageValue=_pageValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

