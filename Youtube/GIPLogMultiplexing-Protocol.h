//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class GIPLogMessage;

@protocol GIPLogMultiplexing
- (void)removeAsyncLogger:(id <GIPAsyncLogger>)arg1;
- (void)addAsyncLogger:(id <GIPAsyncLogger>)arg1;
- (void)removeSyncLogger:(id <GIPSyncLogger>)arg1;
- (void)addSyncLogger:(id <GIPSyncLogger>)arg1;
- (void)setLogFilter:(id <GIPLogFilter>)arg1;
- (void)logWithMessage:(GIPLogMessage *)arg1;
@end

