//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, NSURL;
@protocol SPTAssistedCurationCardModel, SPTAssistedCurationCardViewModelDelegate;

@protocol SPTAssistedCurationCardViewModel <NSObject>
@property(readonly, copy, nonatomic) NSString *loggingIdentifier;
@property(readonly, copy, nonatomic) NSString *providerIdentifier;
@property(readonly, copy, nonatomic) NSString *cardTitle;
@property(readonly, nonatomic) unsigned long long numberOfRows;
@property(readonly, nonatomic) _Bool hasMore;
@property(nonatomic) __weak id <SPTAssistedCurationCardViewModelDelegate> delegate;
- (_Bool)isEqualToCardModel:(id <SPTAssistedCurationCardModel>)arg1;
- (void)loadMore;
- (void)addRowAtIndex:(NSIndexPath *)arg1;
- (_Bool)isTrackPlayingAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)isTrackPlayableAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)isTrackRatedExplicitAtIndexPath:(NSIndexPath *)arg1;
- (void)stopPreviewTrackAtIndexPath:(NSIndexPath *)arg1;
- (void)previewTrackAtIndexPath:(NSIndexPath *)arg1;
- (NSString *)previewIdAtIndexPath:(NSIndexPath *)arg1;
- (NSURL *)trackURLAtIndexPath:(NSIndexPath *)arg1;
- (NSURL *)imageURLAtIndexPath:(NSIndexPath *)arg1;
- (NSString *)subtitleAtIndexPath:(NSIndexPath *)arg1;
- (NSString *)titleAtIndexPath:(NSIndexPath *)arg1;
@end

