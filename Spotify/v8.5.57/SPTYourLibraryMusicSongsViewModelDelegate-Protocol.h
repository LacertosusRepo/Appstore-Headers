//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTYourLibraryMusicSongsViewModel;

@protocol SPTYourLibraryMusicSongsViewModelDelegate <NSObject>
- (void)songsViewModelActiveFiltersDidChange:(id <SPTYourLibraryMusicSongsViewModel>)arg1;
- (void)songsViewModelActiveFiltersWillChange:(id <SPTYourLibraryMusicSongsViewModel>)arg1 completion:(void (^)(void))arg2;
- (void)songsViewModel:(id <SPTYourLibraryMusicSongsViewModel>)arg1 error:(NSError *)arg2;
- (void)songsViewModelDidChange:(id <SPTYourLibraryMusicSongsViewModel>)arg1 sectionConfigurationChanged:(_Bool)arg2;
@end
