//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistPageLoadableContext-Protocol.h"

@class NSDictionary, NSString, NSURL;
@protocol SPTPageCreationContext;

@interface SPTFreeTierPlaylistPageLoadableContextImplementation : NSObject <SPTFreeTierPlaylistPageLoadableContext>
{
    NSURL *_playlistURL;
    id <SPTPageCreationContext> _pageContext;
    NSString *_formatListType;
    NSDictionary *_formatListAttributes;
}

@property(copy, nonatomic) NSDictionary *formatListAttributes; // @synthesize formatListAttributes=_formatListAttributes;
@property(copy, nonatomic) NSString *formatListType; // @synthesize formatListType=_formatListType;
@property(readonly, nonatomic) id <SPTPageCreationContext> pageContext; // @synthesize pageContext=_pageContext;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
- (void).cxx_destruct;
- (id)initWithPlaylistURL:(id)arg1 pageContext:(id)arg2 formatListType:(id)arg3 formatListAttributes:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
