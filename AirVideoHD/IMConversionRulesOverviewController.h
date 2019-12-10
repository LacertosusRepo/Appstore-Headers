//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMVideoDetailSettingsController.h"

#import "IMTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class IMTableView, IMTableViewWrapper, NSString, UIColor;

@interface IMConversionRulesOverviewController : IMVideoDetailSettingsController <IMTableViewDelegate, UITableViewDataSource>
{
    IMTableView *tableView;
    IMTableViewWrapper *tableViewWrapper;
    _Bool hideFilesSection;
    double headerHeight;
    UIColor *cellBackgroundColor;
}

@property(retain, nonatomic) UIColor *cellBackgroundColor; // @synthesize cellBackgroundColor;
@property(nonatomic) double headerHeight; // @synthesize headerHeight;
@property(nonatomic) _Bool hideFilesSection; // @synthesize hideFilesSection;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)willBeginAppearanceTransition:(id)arg1;
- (id)conversionRulesForFiles;
- (id)conversionRulesForStreams;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

