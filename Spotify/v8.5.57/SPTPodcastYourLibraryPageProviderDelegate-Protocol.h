//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTPodcastPlayer, SPTYourLibraryPageProvider;

@protocol SPTPodcastYourLibraryPageProviderDelegate <NSObject>
- (id <SPTPodcastPlayer>)podcastYourLibraryPageProvider:(id <SPTYourLibraryPageProvider>)arg1 podcastPlayerWithViewURI:(NSURL *)arg2 featureIdentifier:(NSString *)arg3 referrerIdentifier:(NSString *)arg4;
@end

