//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTYourLibraryMusicSongsModel;

@protocol SPTYourLibraryMusicSongsModelDelegate <NSObject>
- (void)songsModel:(id <SPTYourLibraryMusicSongsModel>)arg1 error:(NSError *)arg2;
- (void)songsModelAvailableFiltersDidUpdate:(id <SPTYourLibraryMusicSongsModel>)arg1;
- (void)songsModelDidUpdate:(id <SPTYourLibraryMusicSongsModel>)arg1 itemsCountChanged:(_Bool)arg2;
@end

