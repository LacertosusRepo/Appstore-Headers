//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol SPTAssistedCurationViewModel <NSObject>
@property(readonly, nonatomic) id <SPTAssistedCurationAddTrackHandler> addTrackHandler;
@property(readonly, nonatomic) NSURL *playlistURI;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(readonly, nonatomic) unsigned long long numberOfCards;
@property(nonatomic) __weak id <SPTAssistedCurationViewModelDelegate> delegate;
- (id <SPTAssistedCurationCardViewModel>)cardViewModelAtIndex:(unsigned long long)arg1;
- (void)viewDidDisappear;
- (void)viewDidLoad;
@end
