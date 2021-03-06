//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VISREFHeaderController-Protocol.h"
#import "VISREFHeaderViewDelegate-Protocol.h"

@class NSMutableSet, NSString, VISREFHeaderView;

@interface VISREFBaseHeaderController : NSObject <VISREFHeaderController, VISREFHeaderViewDelegate>
{
    _Bool _startListeningToHeightChanges;
    VISREFHeaderView *_view;
    NSMutableSet *_heightDidChangeBlocks;
}

@property(retain, nonatomic) NSMutableSet *heightDidChangeBlocks; // @synthesize heightDidChangeBlocks=_heightDidChangeBlocks;
@property(retain, nonatomic) VISREFHeaderView *view; // @synthesize view=_view;
@property(nonatomic) _Bool startListeningToHeightChanges; // @synthesize startListeningToHeightChanges=_startListeningToHeightChanges;
- (void).cxx_destruct;
- (void)headerViewViewHierarchyDidChange:(id)arg1;
@property(readonly, nonatomic) double minimumHeight;
@property(readonly, nonatomic) double bottomMargin;
- (void)headerView:(id)arg1 headerViewVisibleAreaChanged:(double)arg2;
- (void)headerView:(id)arg1 foregroundViewVisibleAreaChanged:(double)arg2;
- (void)headerView:(id)arg1 backgroundViewVisibleAreaChanged:(double)arg2;
- (void)headerView:(id)arg1 contentViewVisibleAreaChanged:(double)arg2;
- (void)headerView:(id)arg1 topAccessoryViewVisibleAreaChanged:(double)arg2;
- (void)headerView:(id)arg1 heightDidChangeToTotalHeaderHeight:(double)arg2 safeAreaTopInset:(double)arg3 contentViewHeight:(double)arg4 topAccessoryViewHeight:(double)arg5;
- (void)stopListeningForHeightChange:(id)arg1;
- (id)listenForHeightChange:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

