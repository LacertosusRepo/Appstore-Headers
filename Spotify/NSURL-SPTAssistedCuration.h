//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (SPTAssistedCuration)
+ (id)spt_URLwithAssistedCuratedPlaylistURL:(id)arg1;
+ (id)spt_URLWithAssistedCurationPage;
+ (id)spt_assistedCurationPrefixComponents;
- (id)spt_assistedCurationSearchArtistDrillDownArtistURL;
- (id)spt_assistedCurationSearchArtistDrillDownURLEndpoint;
- (_Bool)spt_isAssistedCurationSearchArtistDrillDownURL;
- (id)spt_assistedCurationSearchDrillDownURLQuery;
- (id)spt_assistedCurationSearchDrillDownURLEntityType;
- (_Bool)spt_isAssistedCurationSearchDrillDownURL;
- (id)spt_assistedCuratedPlaylistURL;
@property(readonly, nonatomic, getter=spt_hasAssistedCurationPrefixComponents) _Bool hasAssistedCurationPrefixComponents;
- (_Bool)spt_isAssistedCurationURL;
@end
