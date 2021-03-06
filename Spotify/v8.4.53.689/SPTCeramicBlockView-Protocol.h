//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTCeramicStyle, UIImage;

@protocol SPTCeramicBlockView <NSObject>
@property(retain, nonatomic) UIImage *backgroundImage;
@property(nonatomic) struct CGRect externalVerticalScrollFrame;
@property(nonatomic) struct CGRect frameWithinTableView;
@property(readonly, nonatomic) long long blockIndex;
@property(readonly, nonatomic) SPTCeramicStyle *ceramicStyle;
- (void)invalidateBlockLayout;
- (void)reloadData;
- (void)deselectAllItems;
@end

