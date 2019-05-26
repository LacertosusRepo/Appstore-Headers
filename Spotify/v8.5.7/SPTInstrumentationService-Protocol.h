//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@protocol SPTInstrumentationCurrentPageViewObserver, SPTInstrumentationMapper, SPTInstrumentationModalPresentationMonitor, SPTInstrumentationRemotePlayingHandler, SPTInstrumentationTransportRegistry;

@protocol SPTInstrumentationService <SPTService>
@property(readonly, nonatomic) id <SPTInstrumentationRemotePlayingHandler> remotePlayingHandler;
- (void)removeCurrentPageViewObserver:(id <SPTInstrumentationCurrentPageViewObserver>)arg1;
- (void)addCurrentPageViewObserver:(id <SPTInstrumentationCurrentPageViewObserver>)arg1;
- (id <SPTInstrumentationMapper>)provideIntentMapper;
- (id <SPTInstrumentationMapper>)provideIDMapper;
- (id <SPTInstrumentationModalPresentationMonitor>)provideModalPresentationMonitor;
- (id <SPTInstrumentationTransportRegistry>)provideTransportRegistry;
@end

