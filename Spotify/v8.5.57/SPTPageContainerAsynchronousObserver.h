//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol SPTPageContainer;

@interface SPTPageContainerAsynchronousObserver : NSObject
{
    id <SPTPageContainer> _pageContainer;
    NSMutableArray *_pendingObservers;
}

+ (id)observerForPageContainer:(id)arg1;
@property(retain, nonatomic) NSMutableArray *pendingObservers; // @synthesize pendingObservers=_pendingObservers;
@property(readonly, nonatomic) __weak id <SPTPageContainer> pageContainer; // @synthesize pageContainer=_pageContainer;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addObservationBlock:(CDUnknownBlockType)arg1;
- (id)initWithPageContainer:(id)arg1;

@end

