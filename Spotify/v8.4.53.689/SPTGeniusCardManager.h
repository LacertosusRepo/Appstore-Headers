//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface SPTGeniusCardManager : NSObject
{
    NSMapTable *_observers;
}

@property(retain, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)dispatchBlock:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)cardDidEndDragging;
- (void)cardDidBeginDragging;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 on:(id)arg2;
- (id)init;

@end

