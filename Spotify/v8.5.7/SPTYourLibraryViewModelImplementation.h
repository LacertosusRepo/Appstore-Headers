//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryModelObserver-Protocol.h"
#import "SPTYourLibraryViewModel-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURL, SPTObserverManager;
@protocol SPTPageCreationContext, SPTYourLibraryModel;

@interface SPTYourLibraryViewModelImplementation : NSObject <SPTYourLibraryModelObserver, SPTYourLibraryViewModel>
{
    _Bool _loaded;
    SPTObserverManager *_observers;
    id <SPTYourLibraryModel> _model;
    id <SPTPageCreationContext> _pageCreationContext;
    NSMutableArray *_sections;
    NSMutableDictionary *_viewControllers;
    NSArray *_groupData;
    NSURL *_pendingStateRestoreURI;
}

@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) NSURL *pendingStateRestoreURI; // @synthesize pendingStateRestoreURI=_pendingStateRestoreURI;
@property(copy, nonatomic) NSArray *groupData; // @synthesize groupData=_groupData;
@property(retain, nonatomic) NSMutableDictionary *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) id <SPTPageCreationContext> pageCreationContext; // @synthesize pageCreationContext=_pageCreationContext;
@property(retain, nonatomic) id <SPTYourLibraryModel> model; // @synthesize model=_model;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)notifyObserversNavigateToGroup:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (void)notifyObserversModelUpdateWithActiveGroupIndex:(unsigned long long)arg1 pageIndex:(unsigned long long)arg2;
- (void)notifiyObserversModelUpdated;
- (void)saveLastVisitedPageURI:(id)arg1;
- (void)stateRestoreToLastVisitedURI;
- (void)load;
- (void)yourLibraryModel:(id)arg1 didUpdatePageProviders:(id)arg2 groupData:(id)arg3;
- (_Bool)stateRestoreToURI:(id)arg1;
- (id)pageViewControllerAtIndexPath:(id)arg1;
- (id)groupTitleForSection:(unsigned long long)arg1;
- (id)pageTitleAtIndexPath:(id)arg1;
- (unsigned long long)numberPagesForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)initWithModel:(id)arg1 pageCreationContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

