//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SPTConcertsListingsViewModel;

@protocol SPTConcertsListingsViewModelDelegate <NSObject>
- (void)concertsViewModel:(SPTConcertsListingsViewModel *)arg1 failedWithError:(NSError *)arg2;
- (void)concertsViewModel:(SPTConcertsListingsViewModel *)arg1 loadedConcertsWithError:(NSError *)arg2;

@optional
- (void)concertsViewModel:(SPTConcertsListingsViewModel *)arg1 isOffline:(_Bool)arg2;
- (void)concertsViewModel:(SPTConcertsListingsViewModel *)arg1 isLoading:(_Bool)arg2;
@end
