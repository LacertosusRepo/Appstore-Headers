//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierCollectionItemViewModel.h"

@class NSString, NSURL;

@interface SPTFreeTierCollectionPlaceholderItemViewModel : NSObject <SPTFreeTierCollectionItemViewModel>
{
    unsigned long long _placeholderType;
}

@property(nonatomic) unsigned long long placeholderType; // @synthesize placeholderType=_placeholderType;
@property(readonly, nonatomic) long long offlineStatus;
@property(readonly, nonatomic, getter=isOfflineAvailable) _Bool offlineAvailable;
@property(readonly, nonatomic) _Bool showDecorationOverlay;
@property(readonly, nonatomic, getter=isShuffle) _Bool isShuffle;
@property(readonly, nonatomic) long long icon;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (id)initWithPlaceholderType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

