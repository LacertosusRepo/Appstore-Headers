//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierAllSongsDataSourceDelegate-Protocol.h"

@class NSString, NSURL;
@protocol SPTFreeTierAllSongsDataSource, SPTFreeTierAllSongsRegistry, SPTPageLoadStateHandler;

@interface SPTFreeTierAllSongsPageLoadableRequest : NSObject <SPTFreeTierAllSongsDataSourceDelegate>
{
    id <SPTFreeTierAllSongsRegistry> _allSongsRegistry;
    NSURL *_viewURL;
    id <SPTPageLoadStateHandler> _handler;
    id <SPTFreeTierAllSongsDataSource> _dataSource;
}

@property(retain) id <SPTFreeTierAllSongsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) id <SPTPageLoadStateHandler> handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) NSURL *viewURL; // @synthesize viewURL=_viewURL;
@property(readonly, nonatomic) id <SPTFreeTierAllSongsRegistry> allSongsRegistry; // @synthesize allSongsRegistry=_allSongsRegistry;
- (void).cxx_destruct;
- (void)freeTierAllSongsRequireReloadModelWithDataSource:(id)arg1;
- (void)freeTierAllSongsDidLoadModelWithDataSource:(id)arg1;
- (void)freeTierAllSongsDataSource:(id)arg1 didFailToloadModelWithError:(id)arg2;
- (void)start;
- (id)initWithViewURL:(id)arg1 allSongsRegistry:(id)arg2 handler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

