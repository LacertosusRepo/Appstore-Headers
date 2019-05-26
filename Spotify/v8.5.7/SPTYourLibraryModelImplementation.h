//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryModel-Protocol.h"
#import "SPTYourLibraryPageProviderRegistry-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, SPTObserverManager;
@protocol SPTLocalSettings, SPTYourLibraryTestManager;

@interface SPTYourLibraryModelImplementation : NSObject <SPTYourLibraryModel, SPTYourLibraryPageProviderRegistry>
{
    _Bool _loaded;
    NSMutableArray *_pageProviders;
    NSMutableSet *_groupIdentifiers;
    SPTObserverManager *_observers;
    id <SPTLocalSettings> _localSettings;
    id <SPTYourLibraryTestManager> _testManager;
}

@property(retain, nonatomic) id <SPTYourLibraryTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableSet *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
@property(retain, nonatomic) NSMutableArray *pageProviders; // @synthesize pageProviders=_pageProviders;
- (void).cxx_destruct;
- (long long)numberOfHoursToPersistTab;
- (long long)hoursBetweenDate:(id)arg1 andDate:(id)arg2;
- (id)groupData;
- (void)savePageURI:(id)arg1 visitedAt:(id)arg2;
- (id)lastVisitedPageURI;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)notifyIfLoaded;
- (void)registerPageProvider:(id)arg1;
- (void)load;
- (id)initWithLocalSettings:(id)arg1 testManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

