//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (Station)
+ (id)spt_stationURLWithSeed:(id)arg1;
- (id)spt_URIByNormalizingRadioStation;
- (id)spt_GDPRSafeStationURI;
- (id)spt_radioStationSeedURI;
@property(readonly, nonatomic, getter=spt_canSeedRadioStation) _Bool canSeedRadioStation;
@property(readonly, nonatomic, getter=spt_isFormatListStation) _Bool isFormatListStation;
@property(readonly, nonatomic, getter=spt_isSongSeededRadioStationURL) _Bool songSeededRadioStationURL;
@property(readonly, nonatomic, getter=spt_isPlaylistSeededRadioStationURL) _Bool playlistSeededRadioStationURL;
@property(readonly, nonatomic, getter=spt_isAlbumSeededRadioStationURL) _Bool albumSeededRadioStationURL;
@property(readonly, nonatomic, getter=spt_isArtistSeededRadioStationURL) _Bool artistSeededRadioStationURL;
@property(readonly, nonatomic, getter=spt_isRadioStationURL) _Bool radioStationURL;
- (_Bool)spt_isZeldaStationURL;
@property(readonly, nonatomic, getter=spt_isStationURL) _Bool stationURL;
@end

