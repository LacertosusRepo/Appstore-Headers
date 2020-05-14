//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTAlertInterface, SPTCollectionPlatform, SPTOfflineManager, SPTProductState;

@interface SPTFreeTierAlbumOfflineModelFactory : NSObject
{
    id <SPTOfflineManager> _offlineManager;
    NSString *_username;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTAlertInterface> _alertInterface;
    id <SPTProductState> _productState;
}

@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
- (void).cxx_destruct;
- (id)createAlbumOfflineModelForAlbumURI:(id)arg1;
- (id)initWithOfflineManager:(id)arg1 username:(id)arg2 collectionPlatform:(id)arg3 alertInterface:(id)arg4 productState:(id)arg5;

@end
