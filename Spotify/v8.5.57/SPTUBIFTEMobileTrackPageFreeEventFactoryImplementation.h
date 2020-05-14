//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIFTEMobileTrackPageFreeEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIFTEMobileTrackPageFreeEventFactoryImplementation : NSObject <SPTUBIFTEMobileTrackPageFreeEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithPageReason:(id)arg1;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)itemFactoryWithIdentifier:(id)arg1 position:(long long)arg2 uri:(id)arg3;
- (id)appearsOnCarouselFactory;
- (id)trackCloudFactory;
- (id)shufflePlayButtonFactory;
- (id)addToPlaylistButtonFactory;
- (id)toolbarFactory;
- (id)_location;
- (id)initWithPageReason:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

