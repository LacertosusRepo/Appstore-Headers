//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCKBAtomicCounter : NSObject
{
    _Atomic long long _value;
}

- (long long)nextValue;
- (id)initWithInitialValue:(long long)arg1;
- (id)init;

@end
