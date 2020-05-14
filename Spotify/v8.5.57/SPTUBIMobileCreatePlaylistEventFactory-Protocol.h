//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileCreatePlaylist_BackEventFactory, SPTUBIMobileCreatePlaylist_CloseButtonEventFactory, SPTUBIMobileCreatePlaylist_CreateButtonNameGeneratedEventFactory, SPTUBIMobileCreatePlaylist_CreateButtonNameProvidedEventFactory;

@protocol SPTUBIMobileCreatePlaylistEventFactory <NSObject>
- (id <SPTUBIMobileCreatePlaylist_CloseButtonEventFactory>)closeButtonFactory;
- (id <SPTUBIMobileCreatePlaylist_CreateButtonNameGeneratedEventFactory>)createButtonNameGeneratedFactory;
- (id <SPTUBIMobileCreatePlaylist_CreateButtonNameProvidedEventFactory>)createButtonNameProvidedFactory;
- (id <SPTUBIMobileCreatePlaylist_BackEventFactory>)backFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
