//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMMiniPlayerAwareViewController.h"

#import "IMTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class IMLayout, IMTableView, IMTableViewWrapper, NSString;

@interface IMEarlyAccessController : IMMiniPlayerAwareViewController <IMTableViewDelegate, UITableViewDataSource>
{
    IMTableView *tableView;
    IMTableViewWrapper *tableViewWrapper;
    IMLayout *layout;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)enableSwitchValueChanged:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)layoutSubviews;
- (void)willBeginAppearanceTransition:(id)arg1;
- (void)update;
- (void)viewDidUnload;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
