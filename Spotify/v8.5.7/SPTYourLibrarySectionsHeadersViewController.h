//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTYourLibraryPageViewControllerDataSource-Protocol.h"
#import "SPTYourLibraryPageViewControllerDelegate-Protocol.h"
#import "SPTYourLibrarySectionHeaderViewControllerDelegate-Protocol.h"
#import "SPTYourLibraryViewModelObserver-Protocol.h"

@class NSMutableDictionary, NSString, SPTYourLibraryGLUETheme, SPTYourLibraryLogger, SPTYourLibraryPageViewController;
@protocol SPTYourLibrarySectionsHeadersViewControllerDelegate, SPTYourLibraryViewModel;

@interface SPTYourLibrarySectionsHeadersViewController : UIViewController <SPTYourLibraryPageViewControllerDelegate, SPTYourLibraryPageViewControllerDataSource, SPTYourLibrarySectionHeaderViewControllerDelegate, SPTYourLibraryViewModelObserver>
{
    id <SPTYourLibrarySectionsHeadersViewControllerDelegate> _delegate;
    id <SPTYourLibraryViewModel> _viewModel;
    SPTYourLibraryGLUETheme *_theme;
    SPTYourLibraryPageViewController *_sectionHeaderPageViewController;
    SPTYourLibraryLogger *_logger;
    NSMutableDictionary *_cachedViewControllers;
}

@property(retain, nonatomic) NSMutableDictionary *cachedViewControllers; // @synthesize cachedViewControllers=_cachedViewControllers;
@property(retain, nonatomic) SPTYourLibraryLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTYourLibraryPageViewController *sectionHeaderPageViewController; // @synthesize sectionHeaderPageViewController=_sectionHeaderPageViewController;
@property(retain, nonatomic) SPTYourLibraryGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTYourLibraryViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTYourLibrarySectionsHeadersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)yourLibraryViewModelUpdated:(id)arg1 withActiveGroupIndex:(unsigned long long)arg2 pageIndex:(unsigned long long)arg3;
- (void)yourLibraryViewModelUpdated:(id)arg1;
- (void)yourLibraryViewModel:(id)arg1 navigateToGroup:(unsigned long long)arg2 index:(unsigned long long)arg3;
- (id)pageViewController:(id)arg1 viewControllerAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberPagesForPageViewController:(id)arg1;
- (void)pageViewController:(id)arg1 fromPage:(double)arg2 toPage:(double)arg3;
- (void)sectionHeaderViewController:(id)arg1 didSelectSegmentAtIndex:(unsigned long long)arg2;
- (void)initializeInterface;
- (id)sectionHeaderForIndex:(unsigned long long)arg1;
- (void)reload;
- (void)clearCacheAndReload;
- (void)setSelectedFromSection:(double)arg1 toSection:(double)arg2 fromSegment:(double)arg3 toSegment:(double)arg4;
- (void)scrollToSection:(unsigned long long)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

