//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HUBComponentUIStateManager, NSMutableDictionary;
@protocol HUBComponentRegistry, HUBGestureRecognizerSynchronizing;

@interface HUBComponentReusePool : NSObject
{
    id <HUBComponentRegistry> _componentRegistry;
    HUBComponentUIStateManager *_UIStateManager;
    NSMutableDictionary *_componentWrappers;
    id <HUBGestureRecognizerSynchronizing> _gestureRecognizerSynchronizer;
}

@property(readonly, nonatomic) id <HUBGestureRecognizerSynchronizing> gestureRecognizerSynchronizer; // @synthesize gestureRecognizerSynchronizer=_gestureRecognizerSynchronizer;
@property(readonly, nonatomic) NSMutableDictionary *componentWrappers; // @synthesize componentWrappers=_componentWrappers;
@property(readonly, nonatomic) HUBComponentUIStateManager *UIStateManager; // @synthesize UIStateManager=_UIStateManager;
@property(readonly, nonatomic) id <HUBComponentRegistry> componentRegistry; // @synthesize componentRegistry=_componentRegistry;
- (void).cxx_destruct;
- (id)componentWrapperForModel:(id)arg1 delegate:(id)arg2 parent:(id)arg3;
- (void)addComponentWrappper:(id)arg1;
- (id)initWithComponentRegistry:(id)arg1;

@end

