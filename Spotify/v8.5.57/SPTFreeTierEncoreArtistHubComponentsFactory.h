//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTTrackRowArtistFactory;

@interface SPTFreeTierEncoreArtistHubComponentsFactory : NSObject
{
    id <SPTTrackRowArtistFactory> _encoreComponentFactory;
}

@property(retain, nonatomic) id <SPTTrackRowArtistFactory> encoreComponentFactory; // @synthesize encoreComponentFactory=_encoreComponentFactory;
- (void).cxx_destruct;
- (id)createComponentsWithBaseTheme:(id)arg1;
- (id)initWithArtistEncoreComponentFactory:(id)arg1;

@end

