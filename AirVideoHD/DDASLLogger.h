//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DDAbstractLogger.h"

#import "DDLogger-Protocol.h"

@class NSString;

@interface DDASLLogger : DDAbstractLogger <DDLogger>
{
    struct __asl_object_s *client;
}

+ (id)sharedInstance;
+ (void)initialize;
- (id)loggerName;
- (void)logMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

