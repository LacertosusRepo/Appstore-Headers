//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierCollectionEntityModelDelegate-Protocol.h"
#import "SPTFreeTierCollectionEntityViewModel-Protocol.h"
#import "SPTSortingFilteringPickerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, SPTFreeTierCollectionLogger;
@protocol SPTFreeTierCollectionEntityModel, SPTFreeTierCollectionEntityViewModelConfiguration, SPTFreeTierCollectionEntityViewModelDelegate, SPTFreeTierCollectionTestManager, SPTLinkDispatcher, SPTSortingFilteringUIFactory;

@interface SPTFreeTierCollectionEntityViewModelImplementation : NSObject <SPTSortingFilteringPickerDelegate, SPTFreeTierCollectionEntityViewModel, SPTFreeTierCollectionEntityModelDelegate>
{
    _Bool _compactMode;
    _Bool _buttonSectionEnabled;
    _Bool _modalMode;
    id <SPTFreeTierCollectionEntityViewModelDelegate> _delegate;
    NSString *_title;
    NSString *_searchPlaceholderText;
    id <SPTFreeTierCollectionEntityModel> _model;
    id <SPTFreeTierCollectionEntityViewModelConfiguration> _viewModelConfiguration;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTFreeTierCollectionLogger *_logger;
    id <SPTFreeTierCollectionTestManager> _testManager;
    id <SPTSortingFilteringUIFactory> _sortingFilteringPickerFactory;
    NSString *_username;
    NSDictionary *_groupsMapping;
}

@property(copy, nonatomic) NSDictionary *groupsMapping; // @synthesize groupsMapping=_groupsMapping;
@property(nonatomic, getter=isModalMode) _Bool modalMode; // @synthesize modalMode=_modalMode;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) id <SPTSortingFilteringUIFactory> sortingFilteringPickerFactory; // @synthesize sortingFilteringPickerFactory=_sortingFilteringPickerFactory;
@property(retain, nonatomic) id <SPTFreeTierCollectionTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTFreeTierCollectionLogger *logger; // @synthesize logger=_logger;
@property(nonatomic, getter=isButtonSectionEnabled) _Bool buttonSectionEnabled; // @synthesize buttonSectionEnabled=_buttonSectionEnabled;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTFreeTierCollectionEntityViewModelConfiguration> viewModelConfiguration; // @synthesize viewModelConfiguration=_viewModelConfiguration;
@property(retain, nonatomic) id <SPTFreeTierCollectionEntityModel> model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) NSString *searchPlaceholderText; // @synthesize searchPlaceholderText=_searchPlaceholderText;
@property(readonly, nonatomic, getter=isCompactMode) _Bool compactMode; // @synthesize compactMode=_compactMode;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <SPTFreeTierCollectionEntityViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)entityModelDidUpdate:(id)arg1;
- (void)entityModel:(id)arg1 error:(id)arg2;
- (void)didCancelSortingFilteringPicker:(id)arg1;
- (void)sortingFilteringPicker:(id)arg1 deselectedFilterRule:(id)arg2;
- (void)sortingFilteringPicker:(id)arg1 selectedFilterRule:(id)arg2;
- (void)sortingFilteringPicker:(id)arg1 selectedSortRule:(id)arg2;
- (unsigned long long)totalNumberOfItemsAccountForModalMode:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long trailingAccessoryType;
@property(readonly, nonatomic, getter=isSnackBarsUsedForMessaging) _Bool snackBarsUsedForMessaging;
- (long long)entityRowSize;
- (void)logFilterSortInteractionType:(unsigned long long)arg1;
- (void)removeFilterAtIndex:(long long)arg1;
- (void)resetFilters;
- (id)sortingAndFilteringPickerViewController;
@property(readonly, nonatomic) NSArray *activeFilterTitles;
@property(readonly, nonatomic) unsigned long long filteredContentState;
@property(copy, nonatomic) NSString *textFilter;
- (_Bool)toggleCollapseForSection:(long long)arg1;
- (id)logIdentifierForSection:(long long)arg1;
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
- (unsigned long long)modelGroupFromTableSection:(unsigned long long)arg1;
- (unsigned long long)tableSectionFromModelGroup:(unsigned long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)loadViewModel;
@property(readonly, nonatomic, getter=isClearFiltersControlEnabled) _Bool clearFiltersControlEnabled;
@property(readonly, nonatomic, getter=isSortingAndFilteringEnabled) _Bool sortingAndFilteringEnabled;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)initWithTitle:(id)arg1 model:(id)arg2 viewModelConfiguration:(id)arg3 linkDispatcher:(id)arg4 buttonSectionEnabled:(_Bool)arg5 logger:(id)arg6 testManager:(id)arg7 sortingFilteringPickerFactory:(id)arg8 searchPlaceholderText:(id)arg9 compactMode:(_Bool)arg10 username:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

