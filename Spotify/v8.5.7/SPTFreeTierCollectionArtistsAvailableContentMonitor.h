//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierCollectionAvailableContentMonitor-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"

@class NSString;
@protocol SPTFreeTierCollectionAvailableContentMonitorDelegate, SPTOfflineModeState;

@interface SPTFreeTierCollectionArtistsAvailableContentMonitor : NSObject <SPTOfflineModeStateObserver, SPTFreeTierCollectionAvailableContentMonitor>
{
    _Bool _contentAvailable;
    id <SPTFreeTierCollectionAvailableContentMonitorDelegate> delegate;
    id <SPTOfflineModeState> _offlineState;
}

@property(retain, nonatomic) id <SPTOfflineModeState> offlineState; // @synthesize offlineState=_offlineState;
@property(nonatomic, getter=isContentAvailable) _Bool contentAvailable; // @synthesize contentAvailable=_contentAvailable;
@property(nonatomic) __weak id <SPTFreeTierCollectionAvailableContentMonitorDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithOfflineState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
