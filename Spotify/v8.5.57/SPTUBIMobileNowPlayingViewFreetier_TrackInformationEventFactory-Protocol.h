//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileNowPlayingViewFreetier_TrackInformation_ArtistLabelEventFactory, SPTUBIMobileNowPlayingViewFreetier_TrackInformation_TitleLabelEventFactory;

@protocol SPTUBIMobileNowPlayingViewFreetier_TrackInformationEventFactory <NSObject>
- (id <SPTUBIMobileNowPlayingViewFreetier_TrackInformation_ArtistLabelEventFactory>)artistLabelFactory;
- (id <SPTUBIMobileNowPlayingViewFreetier_TrackInformation_TitleLabelEventFactory>)titleLabelFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

