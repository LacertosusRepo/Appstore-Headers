//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTAssistedCurationCardModel, SPTAssistedCurationModelDelegate;

@protocol SPTAssistedCurationModel <NSObject>
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(readonly, nonatomic) unsigned long long numberOfCards;
@property(readonly, nonatomic) NSURL *playlistURI;
@property(readonly, copy, nonatomic) NSString *playlistName;
@property(nonatomic) __weak id <SPTAssistedCurationModelDelegate> delegate;
- (id <SPTAssistedCurationCardModel>)cardAtIndex:(unsigned long long)arg1;
- (void)load;
@end

