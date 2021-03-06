//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTAssistedCurationAddTrackHandler, SPTAssistedCurationCardViewModel, SPTAssistedCurationViewModelDelegate;

@protocol SPTAssistedCurationViewModel <NSObject>
@property(readonly, nonatomic) long long addTrackIcon;
@property(readonly, nonatomic) id <SPTAssistedCurationAddTrackHandler> addTrackHandler;
@property(readonly, nonatomic) NSURL *contextURI;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(readonly, nonatomic) unsigned long long numberOfCards;
@property(nonatomic) __weak id <SPTAssistedCurationViewModelDelegate> delegate;
- (unsigned long long)indexOfCardViewModel:(id <SPTAssistedCurationCardViewModel>)arg1;
- (id <SPTAssistedCurationCardViewModel>)cardViewModelAtIndex:(unsigned long long)arg1;
- (void)viewDidDisappear;
- (void)viewDidLoad;
@end

