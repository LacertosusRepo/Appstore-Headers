//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

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

