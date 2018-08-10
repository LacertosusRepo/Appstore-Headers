//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FollowModelObserver.h"

@class MultipleFollowModel, NSArray, NSString;

@interface SPTFollowShelfViewModel : NSObject <FollowModelObserver>
{
    id <SPTFollowShelfViewModelDelegate> _delegate;
    id <GLUETheme> _theme;
    id <SPTPageRegistry> _pageRegistry;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTFollowModelFactory> _followModelFactory;
    NSArray *_items;
    MultipleFollowModel *_multipleFollowModel;
}

@property(retain, nonatomic) MultipleFollowModel *multipleFollowModel; // @synthesize multipleFollowModel=_multipleFollowModel;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) __weak id <SPTFollowModelFactory> followModelFactory; // @synthesize followModelFactory=_followModelFactory;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTPageRegistry> pageRegistry; // @synthesize pageRegistry=_pageRegistry;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTFollowShelfViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)followModel:(id)arg1 followDataDidChange:(id)arg2;
- (void)popToViewController:(id)arg1;
- (id)viewControllerForUri:(id)arg1;
- (void)navigateToPageForItemAtIndexPath:(id)arg1;
- (void)toggleFollowStateForItemAtIndexPath:(id)arg1;
- (_Bool)isFollowingItemAtIndexPath:(id)arg1;
- (id)shelfItemForIndexPath:(id)arg1;
- (long long)numberOfShelfItems;
- (void)loadFollowModel;
- (void)loadContent;
- (id)initWithTheme:(id)arg1 pageRegistry:(id)arg2 linkDispatcher:(id)arg3 followModelFactory:(id)arg4 items:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
