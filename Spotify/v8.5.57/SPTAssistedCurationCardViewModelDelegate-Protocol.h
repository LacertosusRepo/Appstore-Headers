//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath;
@protocol SPTAssistedCurationCardViewModel;

@protocol SPTAssistedCurationCardViewModelDelegate <NSObject>
- (void)assistedCurationCardViewModel:(id <SPTAssistedCurationCardViewModel>)arg1 deletedRow:(NSIndexPath *)arg2 completion:(void (^)(void))arg3;
- (void)assistedCurationCardViewModel:(id <SPTAssistedCurationCardViewModel>)arg1 newRows:(NSArray *)arg2 completion:(void (^)(void))arg3;
- (void)didLoadMoreTracksAssistedCurationCardViewModel:(id <SPTAssistedCurationCardViewModel>)arg1;
- (void)didReloadTracksAssistedCurationCardViewModel:(id <SPTAssistedCurationCardViewModel>)arg1;
@end

