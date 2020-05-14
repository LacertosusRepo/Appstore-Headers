//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"

@class NSMutableArray, SPTFreeTierAlbumOfflineModel;
@protocol HUBContentOperationDelegate, SPTFreeTierAlbumTestManager;

@interface SPTFreeTierAlbumOfflineAlbumRenderContentOperation : NSObject <HUBContentOperation>
{
    id <HUBContentOperationDelegate> delegate;
    SPTFreeTierAlbumOfflineModel *_albumOfflineModel;
    NSMutableArray *_contextTracks;
    id <SPTFreeTierAlbumTestManager> _testManager;
}

@property(readonly, nonatomic) id <SPTFreeTierAlbumTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) NSMutableArray *contextTracks; // @synthesize contextTracks=_contextTracks;
@property(readonly, nonatomic) SPTFreeTierAlbumOfflineModel *albumOfflineModel; // @synthesize albumOfflineModel=_albumOfflineModel;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)addAlbumToViewModelBuilder:(id)arg1;
- (id)createPlayer;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithOfflineModel:(id)arg1 testManager:(id)arg2;

@end

