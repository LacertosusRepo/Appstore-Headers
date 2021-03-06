//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierPlaylistSponsoredViewModel.h"
#import "SPTSponsoredContextViewModelDelegate.h"

@class NSString, UIImage;

@interface SPTFreeTierPlaylistSponsoredViewModelImplementation : NSObject <SPTSponsoredContextViewModelDelegate, SPTFreeTierPlaylistSponsoredViewModel>
{
    id <SPTFreeTierPlaylistSponsoredViewModelDelegate> delegate;
    id <SPTSponsoredContextViewModel> _sponsoredContextModel;
    UIImage *_sponsoredImage;
    NSString *_sponsoredMessage;
}

@property(retain, nonatomic) NSString *sponsoredMessage; // @synthesize sponsoredMessage=_sponsoredMessage;
@property(retain, nonatomic) UIImage *sponsoredImage; // @synthesize sponsoredImage=_sponsoredImage;
@property(retain, nonatomic) id <SPTSponsoredContextViewModel> sponsoredContextModel; // @synthesize sponsoredContextModel=_sponsoredContextModel;
@property(nonatomic) __weak id <SPTFreeTierPlaylistSponsoredViewModelDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)sponsoredContextViewModelDidUpdate:(id)arg1;
@property(readonly, nonatomic, getter=isSponsoredPlaylist) _Bool sponsoredPlaylist;
- (void)sponsoredContextInFocus:(_Bool)arg1;
- (void)sponsoredContentSelected:(id)arg1;
- (id)initWithSponsoredContextModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

