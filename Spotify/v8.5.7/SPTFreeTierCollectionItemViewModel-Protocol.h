//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol SPTFreeTierCollectionItemViewModel <NSObject>
@property(readonly, nonatomic, getter=isQuickActionsEnabled) _Bool quickActionsEnabled;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) long long offlineStatus;
@property(readonly, nonatomic, getter=isOfflineAvailable) _Bool offlineAvailable;
@property(readonly, nonatomic, getter=isFolder) _Bool folder;
@property(readonly, nonatomic) _Bool showOverlayMask;
@property(readonly, nonatomic) _Bool showDecorationOverlay;
@property(readonly, nonatomic, getter=isShuffle) _Bool isShuffle;
@property(readonly, nonatomic) long long icon;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) _Bool showCollectionQuickActions;
@property(readonly, nonatomic) _Bool inCollection;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@end

