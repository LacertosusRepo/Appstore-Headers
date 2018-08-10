//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTCellViewControllerProtocol.h"
#import "YTResponder.h"
#import "YTSectionListDrawerObserver.h"

@class NSHashTable, NSString, YTIDrawerListRenderer, YTSectionViewModelFeedController;

@interface YTDrawerListHeaderCellViewController : NSObject <YTCellViewControllerProtocol, YTResponder, YTSectionListDrawerObserver>
{
    YTIDrawerListRenderer *_model;
    NSHashTable *_headers;
    YTSectionViewModelFeedController *_feedController;
    id <YTSectionControllerDelegate> sectionControllerDelegate;
    id <YTResponder> _parentResponder;
}

@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) __weak id <YTSectionControllerDelegate> sectionControllerDelegate; // @synthesize sectionControllerDelegate;
- (void).cxx_destruct;
- (void)didTapDropDown:(id)arg1;
- (void)didTapToggleExpand:(id)arg1;
- (id)drawerProvider;
- (void)reloadMenuItem:(id)arg1;
- (long long)viewState;
- (void)drawerSubscriptionsDidChange;
- (void)drawerViewStateDidChange:(long long)arg1;
- (void)viewDidBecomeHidden;
- (void)viewWillBecomeVisible;
- (void)updateView:(id)arg1;
- (struct CGSize)viewSizeThatFits:(struct CGSize)arg1;
- (CDUnknownBlockType)cellNodeBlock;
- (Class)viewClass;
- (void)updateModel:(id)arg1;
- (id)initWithModel:(id)arg1 feedController:(id)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
