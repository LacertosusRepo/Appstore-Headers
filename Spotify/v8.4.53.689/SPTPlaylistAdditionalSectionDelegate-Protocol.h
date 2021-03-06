//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UITableView;

@protocol SPTPlaylistAdditionalSectionDelegate <NSObject>
- (UITableView *)playlistAdditionalSectionContainingTableView;
- (void)playlistAdditionalSectionDidUpdate:(id <SPTPlaylistAdditionalSection>)arg1;

@optional
- (struct CGRect)boundsForAdditionalSection:(id <SPTPlaylistAdditionalSection>)arg1;
- (NSArray *)visibleCellsInSection:(id <SPTPlaylistAdditionalSection>)arg1 andIndexes:(id *)arg2;
- (void)scrollIntoAdditionalSection:(id <SPTPlaylistAdditionalSection>)arg1 withVerticalOffset:(double)arg2 completion:(void (^)(void))arg3;
- (void)scrollIntoAdditionalSection:(id <SPTPlaylistAdditionalSection>)arg1;
- (_Bool)playlistAdditionalSectionCanMoveItemToMainSectionFromIndex:(long long)arg1;
- (void)playlistAdditionalSectionWillMoveItemToMainSectionFromIndex:(long long)arg1;
@end

