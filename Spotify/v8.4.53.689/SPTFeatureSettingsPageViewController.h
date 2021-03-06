//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingsViewController.h"

@class NSArray, SPTFeatureSettingsPage;

@interface SPTFeatureSettingsPageViewController : SettingsViewController
{
    SPTFeatureSettingsPage *_page;
    NSArray *_items;
}

@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) SPTFeatureSettingsPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (id)spt_pageURI;
- (id)spt_pageIdentifier;
- (void)hasOverrideChangedForItem:(id)arg1 withChange:(id)arg2;
- (void)itemValueChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)contextForRow:(unsigned long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (unsigned long long)baseRowCountForSection:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 footerViewForSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 items:(id)arg2 navigationRouter:(id)arg3;

@end

