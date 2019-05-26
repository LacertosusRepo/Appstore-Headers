//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GLUEEntityRowStyle, NSString, SPTProfileLogger, SPTProfileViewModel, UITableView;

@interface SPTProfileDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    id <UITableViewDelegate> _delegate;
    SPTProfileViewModel *_viewModel;
    UITableView *_tableView;
    id <GLUEImageLoader> _imageLoader;
    id <GLUETheme> _theme;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTProfileLogger *_logger;
    GLUEEntityRowStyle *_entityRowArtistStyle;
    GLUEEntityRowStyle *_entityRowPlaylistStyle;
}

@property(retain, nonatomic) GLUEEntityRowStyle *entityRowPlaylistStyle; // @synthesize entityRowPlaylistStyle=_entityRowPlaylistStyle;
@property(retain, nonatomic) GLUEEntityRowStyle *entityRowArtistStyle; // @synthesize entityRowArtistStyle=_entityRowArtistStyle;
@property(retain, nonatomic) SPTProfileLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak SPTProfileViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <UITableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setupLeadingAccessoryForCell:(id)arg1 entity:(id)arg2 atIndexPath:(id)arg3;
- (void)setupTrailingAccessoryForCell:(id)arg1;
- (void)setupContentViewForCell:(id)arg1;
- (id)rowStyleForDataType:(long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)configureCell:(id)arg1 dataType:(long long)arg2 entity:(id)arg3 indexPath:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pushViewControllerForHeaderViewType:(unsigned long long)arg1;
- (void)pushViewAllViewControllerForViewModelDataType:(long long)arg1;
- (void)pushViewControllerForEntity:(id)arg1 dataType:(long long)arg2 rank:(unsigned long long)arg3;
- (id)viewAllTextForDataType:(long long)arg1;
- (id)sectionTitleForViewModelDataType:(long long)arg1;
- (id)initWithViewModel:(id)arg1 imageLoader:(id)arg2 theme:(id)arg3 linkDispatcher:(id)arg4 logger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
