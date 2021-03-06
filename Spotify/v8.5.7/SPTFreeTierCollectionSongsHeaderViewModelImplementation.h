//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierCollectionSongsHeaderViewModel-Protocol.h"

@class NSString;
@protocol SPTCollectionPlatformConfiguration, SPTFreeTierCollectionSongsHeaderViewModelActionDelegate, SPTFreeTierCollectionSongsHeaderViewModelDelegate, SPTFreeTierCollectionTestManager;

@interface SPTFreeTierCollectionSongsHeaderViewModelImplementation : NSObject <SPTFreeTierCollectionSongsHeaderViewModel>
{
    _Bool _playButtonHiddenWhenFiltering;
    _Bool _playButtonHidden;
    _Bool _filterAndSortingHidden;
    id <SPTFreeTierCollectionSongsHeaderViewModelDelegate> delegate;
    id <SPTFreeTierCollectionSongsHeaderViewModelActionDelegate> actionDelegate;
    NSString *_textFilter;
    id <SPTFreeTierCollectionTestManager> _testManager;
    id <SPTCollectionPlatformConfiguration> _collectionPlatformConfigurator;
}

@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionPlatformConfigurator; // @synthesize collectionPlatformConfigurator=_collectionPlatformConfigurator;
@property(readonly, nonatomic) id <SPTFreeTierCollectionTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic, getter=isFilterAndSortingHidden) _Bool filterAndSortingHidden; // @synthesize filterAndSortingHidden=_filterAndSortingHidden;
@property(nonatomic, getter=isPlayButtonHidden) _Bool playButtonHidden; // @synthesize playButtonHidden=_playButtonHidden;
@property(readonly, nonatomic, getter=isPlayButtonHiddenWhenFiltering) _Bool playButtonHiddenWhenFiltering; // @synthesize playButtonHiddenWhenFiltering=_playButtonHiddenWhenFiltering;
@property(copy, nonatomic) NSString *textFilter; // @synthesize textFilter=_textFilter;
@property(nonatomic) __weak id <SPTFreeTierCollectionSongsHeaderViewModelActionDelegate> actionDelegate; // @synthesize actionDelegate;
@property(nonatomic) __weak id <SPTFreeTierCollectionSongsHeaderViewModelDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)presentSortingFilterPickerInTargetViewController:(id)arg1;
- (void)logFilterSortInteractionType:(unsigned long long)arg1;
- (void)play;
@property(readonly, copy, nonatomic) NSString *searchPlaceholder;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *playButtonTitle;
- (id)initWithTestManager:(id)arg1 hidePlayButtonWhenFiltering:(_Bool)arg2 collectionPlatformConfigurator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

