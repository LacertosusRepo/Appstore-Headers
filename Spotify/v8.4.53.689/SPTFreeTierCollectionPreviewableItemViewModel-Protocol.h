//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTFreeTierCollectionItemViewModel.h"

@class NSString;

@protocol SPTFreeTierCollectionPreviewableItemViewModel <SPTFreeTierCollectionItemViewModel>
@property(readonly, nonatomic) _Bool hideBanQuickAction;
@property(readonly, nonatomic) _Bool showCollectionQuickActions;
@property(readonly, nonatomic) NSString *previewId;
@property(readonly, nonatomic, getter=isPremiumOnly) _Bool premiumOnly;
@property(readonly, nonatomic, getter=isExplicit) _Bool explicit;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic, getter=isBanned) _Bool banned;
@property(readonly, nonatomic) _Bool inCollection;
@end

