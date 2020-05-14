//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperationWrapperDelegate-Protocol.h"
#import "HUBViewModelLoader-Protocol.h"

@class HUBComponentDefaults, HUBViewModelBuilderImplementation, NSArray, NSMutableArray, NSMutableDictionary;
@protocol HUBIconImageResolver, HUBViewModel, HUBViewModelLoaderDelegate, OS_dispatch_queue;

@interface HUBContentOperationLoader : NSObject <HUBContentOperationWrapperDelegate, HUBViewModelLoader>
{
    id <HUBViewModelLoaderDelegate> _delegate;
    NSArray *_contentOperations;
    NSMutableDictionary *_contentOperationWrappers;
    NSMutableArray *_contentOperationQueue;
    HUBComponentDefaults *_componentDefaults;
    id <HUBIconImageResolver> _iconImageResolver;
    id <HUBViewModel> _previouslyLoadedViewModel;
    NSMutableDictionary *_builderSnapshots;
    NSMutableDictionary *_errorSnapshots;
    HUBViewModelBuilderImplementation *_currentBuilder;
    NSObject<OS_dispatch_queue> *_contentOperationDispatchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *contentOperationDispatchQueue; // @synthesize contentOperationDispatchQueue=_contentOperationDispatchQueue;
@property(retain, nonatomic) HUBViewModelBuilderImplementation *currentBuilder; // @synthesize currentBuilder=_currentBuilder;
@property(readonly, nonatomic) NSMutableDictionary *errorSnapshots; // @synthesize errorSnapshots=_errorSnapshots;
@property(readonly, nonatomic) NSMutableDictionary *builderSnapshots; // @synthesize builderSnapshots=_builderSnapshots;
@property(retain, nonatomic) id <HUBViewModel> previouslyLoadedViewModel; // @synthesize previouslyLoadedViewModel=_previouslyLoadedViewModel;
@property(readonly, nonatomic) id <HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) NSMutableArray *contentOperationQueue; // @synthesize contentOperationQueue=_contentOperationQueue;
@property(readonly, nonatomic) NSMutableDictionary *contentOperationWrappers; // @synthesize contentOperationWrappers=_contentOperationWrappers;
@property(readonly, copy, nonatomic) NSArray *contentOperations; // @synthesize contentOperations=_contentOperations;
@property(nonatomic) __weak id <HUBViewModelLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getOrCreateWrapperForContentOperationAtIndex:(unsigned long long)arg1;
- (void)contentOperationQueueDidBecomeEmpty;
- (void)performFirstContentOperationInQueue;
- (id)builderForOperation:(id)arg1;
- (void)scheduleContentOperationsFromIndex:(unsigned long long)arg1;
- (id)createBuilder;
- (id)snapshotOfBuilderAtIndex:(unsigned long long)arg1;
- (void)contentOperationWrapperRequiresRescheduling:(id)arg1;
- (void)contentOperationWrapperDidFinish:(id)arg1 withError:(id)arg2;
- (void)contentOperationWrapper:(id)arg1 didFailWithError:(id)arg2;
- (void)contentOperationWrapperDidFinish:(id)arg1;
- (void)loadViewModel;
@property(readonly, nonatomic) _Bool isLoading;
- (id)initWithContentOperations:(id)arg1 componentDefaults:(id)arg2 iconImageResolver:(id)arg3;

@end

