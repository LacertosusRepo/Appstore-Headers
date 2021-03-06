//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

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

