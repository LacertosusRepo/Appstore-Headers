//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTStorylinesLoadEventLogger;

@interface SPTStorylinesEntitiesLoadEventLogger : NSObject
{
    SPTStorylinesLoadEventLogger *_loadEventLogger;
}

@property(retain, nonatomic) SPTStorylinesLoadEventLogger *loadEventLogger; // @synthesize loadEventLogger=_loadEventLogger;
- (void).cxx_destruct;
- (void)logEntitiesLoadEventForType:(long long)arg1 fromSource:(long long)arg2 withDetails:(id)arg3;
- (void)logEntitiesLoadErrorEventFromSource:(long long)arg1 withDetails:(id)arg2;
- (void)logEntitiesLoadSuccessEventFromSource:(long long)arg1;
- (void)logEntitiesLoadingEvent;
- (id)initWithLoadEventLogger:(id)arg1;

@end

