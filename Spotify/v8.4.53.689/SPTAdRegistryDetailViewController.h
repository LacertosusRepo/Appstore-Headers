//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTableViewController.h"

@class SPTAdEntity, SPTEntityTableHeaderView;

@interface SPTAdRegistryDetailViewController : SPTableViewController
{
    id <SPTContainerUIService> _containerUIService;
    id <GLUEImageLoader> _glueImageLoader;
    id <GLUETheme> _glueTheme;
    SPTAdEntity *_entity;
    SPTEntityTableHeaderView *_headerView;
}

@property(retain, nonatomic) SPTEntityTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak SPTAdEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
- (void).cxx_destruct;
- (void)sendEmail;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithEntity:(id)arg1 containerService:(id)arg2 glueImageLoader:(id)arg3;

@end
