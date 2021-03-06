//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileConnectVolumeControlEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileConnectVolumeControlEventFactoryImplementation : NSObject <SPTUBIMobileConnectVolumeControlEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithPageIdentifier:(id)arg1;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)systemVolumeDownFactory;
- (id)systemVolumeUpFactory;
- (id)systemVolumeSliderFactory;
- (id)volumeSliderFactory;
- (id)remoteVolumeOverlayFactory;
- (id)_location;
- (id)initWithPageIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

