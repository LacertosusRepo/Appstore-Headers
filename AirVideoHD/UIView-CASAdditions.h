//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CASStyleableItem-Protocol.h"

@class NSString;
@protocol CASStyleableItem;

@interface UIView (CASAdditions) <CASStyleableItem>
+ (void)load;
- (void)cas_setNeedsUpdateStyling;
- (_Bool)cas_needsUpdateStyling;
- (void)cas_updateStyling;
- (void)cas_updateStylingIfNeededRecursive;
- (void)cas_updateStylingIfNeeded;
@property(nonatomic) __weak id <CASStyleableItem> cas_alternativeParent;
@property(readonly, nonatomic) __weak id <CASStyleableItem> cas_parent;
- (_Bool)cas_hasStyleClass:(id)arg1;
- (void)cas_removeStyleClass:(id)arg1;
- (void)cas_addStyleClass:(id)arg1;
@property(copy, nonatomic) NSString *cas_styleClass;
- (void)cas_setNeedsUpdateStylingForSubviews;
- (void)cas_didMoveToWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

