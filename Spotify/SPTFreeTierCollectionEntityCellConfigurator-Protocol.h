//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GLUEEntityRowTableViewCell;

@protocol SPTFreeTierCollectionEntityCellConfigurator <NSObject>
@property(readonly, nonatomic) double preferredCellHeight;
- (void)updateStyle:(id <GLUEStyle>)arg1;
- (void)configureCell:(GLUEEntityRowTableViewCell *)arg1 withViewModel:(id <SPTFreeTierCollectionItemViewModel>)arg2;
@end

