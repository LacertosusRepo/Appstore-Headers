//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@class NSArray;

@interface NSURL (SPTParsing)
+ (id)spt_URLWithComponents:(id)arg1;
- (unsigned long long)spt_URIComponentCount;
- (id)spt_URIComponentAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=spt_isSpotifyURI) _Bool isSpotifyURI;
@property(readonly, nonatomic, getter=spt_spotifyURIComponents) NSArray *spotifyURIComponents;
@end

