//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSortingFilteringPickerDelegate-Protocol.h"
#import "SPTYourLibraryMusicEntityModelDelegate-Protocol.h"
#import "SPTYourLibraryMusicEntityViewModel-Protocol.h"

@class NSArray, NSDictionary, NSString, SPTYourLibraryMusicGroupLabelReader, SPTYourLibraryMusicLogger;
@protocol SPTLinkDispatcher, SPTSortingFilteringUIFactory, SPTYourLibraryMusicEntityModel, SPTYourLibraryMusicEntityViewModelConfiguration, SPTYourLibraryMusicEntityViewModelDelegate, SPTYourLibraryMusicTestManager;

@interface SPTYourLibraryMusicEntityViewModelImplementation : NSObject <SPTSortingFilteringPickerDelegate, SPTYourLibraryMusicEntityViewModel, SPTYourLibraryMusicEntityModelDelegate>
{
    _Bool _buttonSectionEnabled;
    _Bool _modalMode;
    _Bool _scrollingToTop;
    _Bool _didLogScrollIndexSelected;
    id <SPTYourLibraryMusicEntityViewModelDelegate> _delegate;
    NSString *_title;
    NSString *_searchPlaceholderText;
    id <SPTYourLibraryMusicEntityModel> _model;
    id <SPTYourLibraryMusicEntityViewModelConfiguration> _viewModelConfiguration;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTYourLibraryMusicLogger *_logger;
    id <SPTYourLibraryMusicTestManager> _testManager;
    id <SPTSortingFilteringUIFactory> _sortingFilteringPickerFactory;
    NSString *_username;
    NSDictionary *_groupsMapping;
    SPTYourLibraryMusicGroupLabelReader *_groupLabelReader;
}

@property(retain, nonatomic) SPTYourLibraryMusicGroupLabelReader *groupLabelReader; // @synthesize groupLabelReader=_groupLabelReader;
@property(nonatomic) _Bool didLogScrollIndexSelected; // @synthesize didLogScrollIndexSelected=_didLogScrollIndexSelected;
@property(nonatomic) _Bool scrollingToTop; // @synthesize scrollingToTop=_scrollingToTop;
@property(copy, nonatomic) NSDictionary *groupsMapping; // @synthesize groupsMapping=_groupsMapping;
@property(nonatomic, getter=isModalMode) _Bool modalMode; // @synthesize modalMode=_modalMode;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) id <SPTSortingFilteringUIFactory> sortingFilteringPickerFactory; // @synthesize sortingFilteringPickerFactory=_sortingFilteringPickerFactory;
@property(retain, nonatomic) id <SPTYourLibraryMusicTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTYourLibraryMusicLogger *logger; // @synthesize logger=_logger;
@property(nonatomic, getter=isButtonSectionEnabled) _Bool buttonSectionEnabled; // @synthesize buttonSectionEnabled=_buttonSectionEnabled;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTYourLibraryMusicEntityViewModelConfiguration> viewModelConfiguration; // @synthesize viewModelConfiguration=_viewModelConfiguration;
@property(retain, nonatomic) id <SPTYourLibraryMusicEntityModel> model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) NSString *searchPlaceholderText; // @synthesize searchPlaceholderText=_searchPlaceholderText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <SPTYourLibraryMusicEntityViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)entityModelDidUpdate:(id)arg1 itemsCountChanged:(_Bool)arg2;
- (void)entityModel:(id)arg1 error:(id)arg2;
- (void)didCancelSortingFilteringPicker:(id)arg1 reason:(unsigned long long)arg2;
- (void)sortingFilteringPicker:(id)arg1 deselectedFilterRule:(id)arg2;
- (void)sortingFilteringPicker:(id)arg1 selectedFilterRule:(id)arg2;
- (void)sortingFilteringPicker:(id)arg1 selectedSortRule:(id)arg2;
- (void)didScrollToTop;
- (void)willScrollToTop;
- (unsigned long long)totalNumberOfItemsAccountForModalMode:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long trailingAccessoryType;
@property(readonly, nonatomic, getter=isSnackBarsUsedForMessaging) _Bool snackBarsUsedForMessaging;
- (void)logEmptyStaticFilterViewImpression;
- (void)logEmptyTextFilterViewImpression;
- (void)logEmptyViewImpression;
- (void)logQuickScrollDragEnded;
- (void)logQuickScrollDragStarted;
- (void)logQuickScrollIsVisible;
- (void)logSectionIndexSelected;
- (void)logFilterSortInteractionType:(unsigned long long)arg1;
- (void)removeFilterAtIndex:(long long)arg1;
- (void)resetFilters;
- (id)sortingAndFilteringPickerViewController;
- (void)setActiveFilterRules:(id)arg1;
- (id)activeFilterRules;
- (id)availableFilterRules;
@property(readonly, nonatomic) NSArray *activeFilterTitles;
@property(readonly, nonatomic) unsigned long long filteredContentState;
@property(copy, nonatomic) NSString *textFilter;
- (_Bool)toggleCollapseForSection:(long long)arg1;
- (unsigned long long)logIdentifierForSection:(long long)arg1;
- (_Bool)showHeaderForSection:(long long)arg1;
- (_Bool)collapsableSection:(long long)arg1;
- (_Bool)collapsedSection:(long long)arg1;
- (id)subtitleForSection:(long long)arg1;
- (id)titleForSection:(long long)arg1;
- (_Bool)showSeparatorForSection:(long long)arg1;
- (void)updateModalMode:(_Bool)arg1;
- (long long)numberOfRowsInSections:(long long)arg1;
- (void)performItemActionAtIndexPath:(id)arg1;
- (void)itemSelectedAtIndexPath:(id)arg1;
- (void)logItemInteractionInSection:(unsigned long long)arg1 index:(unsigned long long)arg2 targetURL:(id)arg3;
- (unsigned long long)modelGroupFromTableSection:(unsigned long long)arg1;
- (unsigned long long)tableSectionFromModelGroup:(unsigned long long)arg1;
- (id)groupLabelAtIndexPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)viewWillAppear;
- (void)loadViewModel;
- (long long)locationForSectionIndex:(long long)arg1;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
- (_Bool)isContentFiltered;
@property(readonly, nonatomic, getter=isGroupLabelAvailable) _Bool groupLabelAvailable;
@property(readonly, nonatomic) long long quickScrollMinPages;
@property(readonly, nonatomic) _Bool quickScrollUseDarkStyle;
@property(readonly, nonatomic) unsigned long long quickScrollMechanism;
@property(readonly, nonatomic, getter=isSortingAndFilteringEnabled) _Bool sortingAndFilteringEnabled;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)initWithTitle:(id)arg1 model:(id)arg2 viewModelConfiguration:(id)arg3 linkDispatcher:(id)arg4 buttonSectionEnabled:(_Bool)arg5 logger:(id)arg6 testManager:(id)arg7 sortingFilteringPickerFactory:(id)arg8 searchPlaceholderText:(id)arg9 username:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

