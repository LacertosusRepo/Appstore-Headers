//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTResponder.h"
#import "YTSectionControllerProtocol.h"

@class NSArray, NSString, YTIDropdownRenderer, YTINavigationDropdownItemRenderer;

@interface YTExpandingDropdownSectionController : NSObject <YTSectionControllerProtocol, YTResponder>
{
    YTIDropdownRenderer *_renderer;
    _Bool _expanded;
    _Bool _isRefreshing;
    YTINavigationDropdownItemRenderer *_selectedNavigationItem;
    NSArray *_allNavigationItems;
    id <YTSectionControllerDelegate> _sectionControllerDelegate;
    id <YTResponder> _parentResponder;
}

@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) __weak id <YTSectionControllerDelegate> sectionControllerDelegate; // @synthesize sectionControllerDelegate=_sectionControllerDelegate;
- (void).cxx_destruct;
- (void)collapseDropdown;
- (void)expandDropdown;
- (id)dropdownOptionIndices;
- (_Bool)hasBottomSeparator;
- (id)implementationForBehavior:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1 fromView:(id)arg2;
- (_Bool)shouldSelectItemAtIndex:(unsigned long long)arg1;
- (id)cellClassesToRegister;
- (Class)cellClassForItemAtIndex:(long long)arg1;
- (void)updateCell:(id)arg1 forIndex:(long long)arg2;
- (_Bool)canLoadMore;
- (long long)numberOfItems;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1 withSize:(struct CGSize)arg2;
- (id)model;
- (void)optionHandlingComplete;
- (id)initWithParentResponder:(id)arg1 renderer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

