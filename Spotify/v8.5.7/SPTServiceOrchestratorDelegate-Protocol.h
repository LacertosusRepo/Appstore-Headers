//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTServiceOrchestrator;

@protocol SPTServiceOrchestratorDelegate <NSObject>
- (void)serviceOrchestrator:(SPTServiceOrchestrator *)arg1 didUnloadServicesForScope:(NSString *)arg2;
- (void)serviceOrchestrator:(SPTServiceOrchestrator *)arg1 willUnloadServicesForScope:(NSString *)arg2;
- (void)serviceOrchestrator:(SPTServiceOrchestrator *)arg1 didLoadServicesForScope:(NSString *)arg2;
- (void)serviceOrchestrator:(SPTServiceOrchestrator *)arg1 willLoadServicesForScope:(NSString *)arg2;
@end
