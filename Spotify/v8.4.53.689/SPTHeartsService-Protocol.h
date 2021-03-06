//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingStateObserver.h"
#import "SPTService.h"

@protocol SPTHeartsService <SPTService, SPTNowPlayingStateObserver>
@property(readonly, nonatomic, getter=isAddedToLibrarySnackBarMessagesEnabled) _Bool addedToLibrarySnackBarMessagesEnabled;
@property(readonly, nonatomic, getter=isHeartsFeatureEnabled) _Bool heartsFeatureEnabled;
@property(nonatomic) __weak id <SPTHeartsServiceDelegate> delegate;
- (id <SPTHeartsPopupPresenter>)providePopupPresenter;
@end

