//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol ADJLogger
- (void)assert:(NSString *)arg1;
- (void)error:(NSString *)arg1;
- (void)warnInProduction:(NSString *)arg1;
- (void)warn:(NSString *)arg1;
- (void)info:(NSString *)arg1;
- (void)debug:(NSString *)arg1;
- (void)verbose:(NSString *)arg1;
- (void)lockLogLevel;
- (void)setLogLevel:(int)arg1 isProductionEnvironment:(_Bool)arg2;
@end

