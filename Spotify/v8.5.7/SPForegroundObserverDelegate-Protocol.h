//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPForegroundObserver;

@protocol SPForegroundObserverDelegate <NSObject>
- (void)foregroundObserverDidHibernate:(SPForegroundObserver *)arg1;
- (void)foregroundObserverDidAwake:(SPForegroundObserver *)arg1;
@end

