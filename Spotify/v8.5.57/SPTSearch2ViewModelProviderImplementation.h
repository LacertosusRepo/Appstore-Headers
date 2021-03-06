//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearch2ViewModelProvider-Protocol.h"
#import "SPTSearchPlatformContextDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol HUBViewModel, SPTSearch2ContextProvider, SPTSearch2ViewModelProviderDelegate;

@interface SPTSearch2ViewModelProviderImplementation : NSObject <SPTSearchPlatformContextDelegate, SPTSearch2ViewModelProvider>
{
    id <HUBViewModel> _viewModel;
    id <SPTSearch2ViewModelProviderDelegate> _delegate;
    unsigned long long _state;
    id <SPTSearch2ContextProvider> _contextProvider;
    NSMutableArray *_contextsStack;
}

@property(readonly, nonatomic) NSMutableArray *contextsStack; // @synthesize contextsStack=_contextsStack;
@property(readonly, nonatomic) id <SPTSearch2ContextProvider> contextProvider; // @synthesize contextProvider=_contextProvider;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <SPTSearch2ViewModelProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <HUBViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)updateState;
- (void)removeExcessiveContexts;
- (void)promoteContext:(id)arg1;
- (id)getOrCreateContextForQuery:(id)arg1;
- (unsigned long long)indexOfContextForQuery:(id)arg1;
- (void)context:(id)arg1 didUpdateStateFrom:(unsigned long long)arg2;
- (void)context:(id)arg1 didUpdateViewModelFrom:(id)arg2;
- (void)loadNextPage;
- (void)loadForQuery:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)initWithContextProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

