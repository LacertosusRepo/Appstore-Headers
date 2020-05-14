//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDApplicationDataSource-Protocol.h"

@class NSMutableDictionary, NSString, RAPIContext;

@interface RAPIResources : NSObject <IDApplicationDataSource>
{
    NSString *_rapiName;
    long long _imageIdCheckmark;
    long long _imageIdArtist;
    long long _imageIdAlbum;
    long long _imageIdTrack;
    long long _imageIdSkipPrevious;
    long long _imageIdSkipNext;
    long long _imageIdCICHackProgressBarShutter;
    long long _imageIdThirdPartyLogo;
    RAPIContext *_rapiContext;
    NSMutableDictionary *_imageIdMap;
}

@property(retain) NSMutableDictionary *imageIdMap; // @synthesize imageIdMap=_imageIdMap;
@property(retain) RAPIContext *rapiContext; // @synthesize rapiContext=_rapiContext;
@property long long imageIdThirdPartyLogo; // @synthesize imageIdThirdPartyLogo=_imageIdThirdPartyLogo;
@property long long imageIdCICHackProgressBarShutter; // @synthesize imageIdCICHackProgressBarShutter=_imageIdCICHackProgressBarShutter;
@property long long imageIdSkipNext; // @synthesize imageIdSkipNext=_imageIdSkipNext;
@property long long imageIdSkipPrevious; // @synthesize imageIdSkipPrevious=_imageIdSkipPrevious;
@property long long imageIdTrack; // @synthesize imageIdTrack=_imageIdTrack;
@property long long imageIdAlbum; // @synthesize imageIdAlbum=_imageIdAlbum;
@property long long imageIdArtist; // @synthesize imageIdArtist=_imageIdArtist;
@property long long imageIdCheckmark; // @synthesize imageIdCheckmark=_imageIdCheckmark;
@property(retain) NSString *rapiName; // @synthesize rapiName=_rapiName;
- (void).cxx_destruct;
- (id)textDatabasesForApplication:(id)arg1;
- (id)imageDatabasesForApplication:(id)arg1;
- (id)hmiDescriptionForApplication:(id)arg1;
- (id)manifestForApplication:(id)arg1;
- (id)getLocalizedString:(id)arg1 withLanguageIdentifier:(id)arg2;
- (id)getLocalizedString:(id)arg1;
- (long long)getImageIdOf:(id)arg1;
- (void)getImageIdMap;
- (void)getRapiName;
- (id)getAppSwitcherURLString;
- (void)checkRAPIVersion;
- (id)getResourceAsDictionary:(id)arg1 prefix:(id)arg2;
- (id)getResourceAsString:(id)arg1 prefix:(id)arg2;
- (id)getResourceAsData:(id)arg1 prefix:(id)arg2;
- (id)getResourceURL:(id)arg1 prefix:(id)arg2;
- (id)resourcesBundle;
- (id)getLockScreenLogo;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

