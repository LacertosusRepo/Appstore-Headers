//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface SPTPlayTokenHandler : NSObject
{
    struct scoped_connection _playTokenHandlerConnection;
    NSMapTable *_observers;
}

+ (id)playTokenHandlerWithPlayTokenHandler:(struct PlayTokenHandler *)arg1;
@property(retain, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1 onQueue:(id)arg2;
- (void)addObserver:(id)arg1 onQueue:(id)arg2;
- (id)initWithPlayTokenHandler:(struct PlayTokenHandler *)arg1;

@end

