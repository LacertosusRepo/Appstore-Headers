//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADJLogger-Protocol.h"

@interface ADJLogger : NSObject <ADJLogger>
{
    _Bool _logLevelLocked;
    _Bool _isProductionEnvironment;
    int _loglevel;
}

+ (int)logLevelFromString:(id)arg1;
@property(nonatomic) _Bool isProductionEnvironment; // @synthesize isProductionEnvironment=_isProductionEnvironment;
@property(nonatomic) _Bool logLevelLocked; // @synthesize logLevelLocked=_logLevelLocked;
@property(nonatomic) int loglevel; // @synthesize loglevel=_loglevel;
- (void)logLevel:(id)arg1 format:(id)arg2 parameters:(char *)arg3;
- (void)assert:(id)arg1;
- (void)error:(id)arg1;
- (void)warnInProduction:(id)arg1;
- (void)warn:(id)arg1;
- (void)info:(id)arg1;
- (void)debug:(id)arg1;
- (void)verbose:(id)arg1;
- (void)lockLogLevel;
- (void)setLogLevel:(int)arg1 isProductionEnvironment:(_Bool)arg2;
- (id)init;

@end

