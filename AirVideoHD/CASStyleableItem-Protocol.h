//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol CASStyleableItem;

@protocol CASStyleableItem <NSObject>
@property(readonly, nonatomic) __weak id <CASStyleableItem> cas_alternativeParent;
@property(readonly, nonatomic) __weak id <CASStyleableItem> cas_parent;
@property(copy, nonatomic) NSString *cas_styleClass;
- (void)cas_setNeedsUpdateStyling;
- (_Bool)cas_needsUpdateStyling;
- (void)cas_updateStyling;
- (void)cas_updateStylingIfNeeded;
- (_Bool)cas_hasStyleClass:(NSString *)arg1;
- (void)cas_removeStyleClass:(NSString *)arg1;
- (void)cas_addStyleClass:(NSString *)arg1;
@end
