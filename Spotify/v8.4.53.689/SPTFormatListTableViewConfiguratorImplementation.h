//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFormatListTableViewConfigurator.h"
#import "SPTFormatListTableViewConfiguratorInternal.h"

@class NSMutableDictionary, NSString, SPTFormatListPlatformConfiguratorDelegate;

@interface SPTFormatListTableViewConfiguratorImplementation : NSObject <SPTFormatListTableViewConfigurator, SPTFormatListTableViewConfiguratorInternal>
{
    id <SPTFormatListTableViewConfiguratorDelegate> delegate;
    NSMutableDictionary *_cellClassesForTypes;
    SPTFormatListPlatformConfiguratorDelegate *_defaultConfigurationDelegate;
}

@property(retain, nonatomic) SPTFormatListPlatformConfiguratorDelegate *defaultConfigurationDelegate; // @synthesize defaultConfigurationDelegate=_defaultConfigurationDelegate;
@property(retain, nonatomic) NSMutableDictionary *cellClassesForTypes; // @synthesize cellClassesForTypes=_cellClassesForTypes;
@property(nonatomic) __weak id <SPTFormatListTableViewConfiguratorDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)registerCellsInTableView:(id)arg1;
- (void)decorateTableViewCell:(id)arg1 indexPath:(id)arg2 formatListItemModel:(id)arg3;
- (void)decorateTableViewCell:(id)arg1 withAccessoryButton:(id)arg2 indexPath:(id)arg3 formatListItemModel:(id)arg4;
- (double)rowHeightForIndexPath:(id)arg1 formatListItemModel:(id)arg2;
- (id)cellIdentifierForIndexPath:(id)arg1 formatListItemModel:(id)arg2;
- (void)registerCell:(Class)arg1 forType:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
