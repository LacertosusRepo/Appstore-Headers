//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_SPTHubRemoteContentOperationURLResolver.h"

@class NSString, NSURL;

@interface SPTFreeTierRecommendationsPlaylistRemoteURLResolver : NSObject <EXP_SPTHubRemoteContentOperationURLResolver>
{
    NSURL *_playlistURL;
    id <SPTProductState> _productState;
}

+ (id)dateFormatter;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
- (void).cxx_destruct;
- (id)resolveContentURL;
- (id)initWithPlaylistURL:(id)arg1 productState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
