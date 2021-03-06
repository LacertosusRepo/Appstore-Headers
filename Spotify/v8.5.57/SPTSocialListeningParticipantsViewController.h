//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTPageController-Protocol.h"
#import "SPTSocialListeningListenTogetherStateObserver-Protocol.h"
#import "SPTSocialListeningSessionViewUserCellDelegate-Protocol.h"
#import "SPTSocialListeningViewModelObserver-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, NSURL, SPTSocialListeningGLUETheme, SPTSocialListeningListenTogetherBottomBanner, SPTSocialListeningLoggerImplementation, SPTSocialListeningSessionViewUserCellConfigurator, SPTTableView, UIBarButtonItem;
@protocol GLUEImageLoader, SPTPageContainer, SPTShareFeature, SPTSocialListeningViewModel;

@interface SPTSocialListeningParticipantsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SPTSocialListeningSessionViewUserCellDelegate, SPTSocialListeningViewModelObserver, SPTSocialListeningListenTogetherStateObserver, SPTPageController>
{
    id <SPTSocialListeningViewModel> _viewModel;
    id <GLUEImageLoader> _imageLoader;
    SPTSocialListeningLoggerImplementation *_logger;
    SPTSocialListeningGLUETheme *_theme;
    id <SPTShareFeature> _shareFeature;
    SPTSocialListeningSessionViewUserCellConfigurator *_cellConfigurator;
    SPTTableView *_tableView;
    SPTSocialListeningListenTogetherBottomBanner *_bottomBanner;
    UIBarButtonItem *_inviteBarButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *inviteBarButtonItem; // @synthesize inviteBarButtonItem=_inviteBarButtonItem;
@property(retain, nonatomic) SPTSocialListeningListenTogetherBottomBanner *bottomBanner; // @synthesize bottomBanner=_bottomBanner;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTSocialListeningSessionViewUserCellConfigurator *cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(readonly, nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(readonly, nonatomic) SPTSocialListeningGLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTSocialListeningLoggerImplementation *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <SPTSocialListeningViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)placeholderCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)inviteButtonTapped:(id)arg1;
- (void)navigateToQueue;
- (void)updateNavigationBarButtons;
- (void)updateBottomBanner;
- (void)sessionViewUserCellDidTapActionButton:(id)arg1;
- (void)sessionViewUserCellDidTapUserImageOrName:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)listenTogetherStateUpdated:(long long)arg1;
- (void)socialListeningViewModelWillLeaveSession:(id)arg1;
- (void)socialListeningViewModelDidDeleteSession:(id)arg1;
- (void)socialListeningViewModel:(id)arg1 didReceiveError:(id)arg2;
- (void)socialListeningViewModelUpdated:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)addConstraints;
- (void)initializeInterface;
- (void)applyThemeLayout;
- (void)setupCellConfigurator;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 logger:(id)arg2 imageLoader:(id)arg3 theme:(id)arg4 shareFeature:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

