//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@protocol SPTFreeTierPlaylistSponsoredViewModel <NSObject>
@property(readonly, nonatomic, getter=isSponsoredPlaylist) _Bool sponsoredPlaylist;
@property(readonly, nonatomic) NSString *sponsoredMessage;
@property(readonly, nonatomic) UIImage *sponsoredImage;
@property(nonatomic) __weak id <SPTFreeTierPlaylistSponsoredViewModelDelegate> delegate;
- (void)sponsoredContextInFocus:(_Bool)arg1;
- (void)sponsoredContentSelected:(id)arg1;
@end

