//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingModeViewControllerRegistry-Protocol.h"

@class NSMapTable, NSString;

@interface SPTNowPlayingModeViewControllerRegistryImplementation : NSObject <SPTNowPlayingModeViewControllerRegistry>
{
    NSMapTable *_registry;
}

@property(readonly, nonatomic) NSMapTable *registry; // @synthesize registry=_registry;
- (void).cxx_destruct;
- (id)viewControllerForIdentifier:(id)arg1;
- (_Bool)registerViewControllerBuilder:(id)arg1 forIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
