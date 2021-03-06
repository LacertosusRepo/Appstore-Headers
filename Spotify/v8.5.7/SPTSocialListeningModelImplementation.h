//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTScannablesDataSourceDelegate-Protocol.h"
#import "SPTSocialListeningDataLoaderDelegate-Protocol.h"
#import "SPTSocialListeningModel-Protocol.h"

@class NSString, SPTObserverManager, SPTSocialListeningDataLoader, SPTSocialListeningSession;
@protocol SPTScannablesDataSource;

@interface SPTSocialListeningModelImplementation : NSObject <SPTSocialListeningModel, SPTSocialListeningDataLoaderDelegate, SPTScannablesDataSourceDelegate>
{
    SPTObserverManager *_observers;
    SPTSocialListeningDataLoader *_dataLoader;
    SPTSocialListeningSession *_session;
    id <SPTScannablesDataSource> _scannablesDataSource;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <SPTScannablesDataSource> scannablesDataSource; // @synthesize scannablesDataSource=_scannablesDataSource;
@property(retain, nonatomic) SPTSocialListeningSession *session; // @synthesize session=_session;
@property(retain, nonatomic) SPTSocialListeningDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)scannablesDataSource:(id)arg1 didFinishFetchingScannable:(id)arg2;
- (void)scannablesDataSource:(id)arg1 didFailFetchingScannableWithError:(id)arg2;
- (void)socialListeningDataLoader:(id)arg1 didFailWithError:(id)arg2;
- (void)socialListeningDataLoaderDidDeleteSession:(id)arg1;
- (void)socialListeningDataLoaderDidEndSession:(id)arg1;
- (void)socialListeningDataLoader:(id)arg1 didObtainSession:(id)arg2;
- (void)fetchScannablesImageForSession:(id)arg1;
- (void)handleSession:(id)arg1;
- (void)notifyIfLoaded;
@property(readonly, nonatomic) unsigned long long connectedParticipants;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)leaveSession;
- (void)joinSession:(id)arg1;
- (void)load;
- (id)initWithDataLoader:(id)arg1 scannablesDataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

