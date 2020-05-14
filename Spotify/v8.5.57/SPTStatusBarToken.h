//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTStatusBarManager;

@interface SPTStatusBarToken : NSObject
{
    _Bool _hidden;
    SPTStatusBarManager *_manager;
    long long _animation;
}

@property(readonly, nonatomic) long long animation; // @synthesize animation=_animation;
@property(readonly, nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) __weak SPTStatusBarManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithStatusBarManager:(id)arg1 hidden:(_Bool)arg2 animation:(long long)arg3 context:(id)arg4;

@end

