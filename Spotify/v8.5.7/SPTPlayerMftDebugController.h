//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SPTPlayerMftCanPlayChecker, SPTTableView;

@interface SPTPlayerMftDebugController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    SPTPlayerMftCanPlayChecker *_mftCanPlayChecker;
    SPTTableView *_tableView;
    NSArray *_data;
}

@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) SPTPlayerMftCanPlayChecker *mftCanPlayChecker; // @synthesize mftCanPlayChecker=_mftCanPlayChecker;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)resetArtistPlays;
- (void)resetAlbumPlays;
- (void)resetTrackPlays;
- (void)resetSkipCount;
- (void)viewDidLoad;
- (id)initWithMftRules:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
