//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingButton.h"

#import "SPTNowPlayingCollectionButton-Protocol.h"

@class NSString, UIColor;
@protocol SPTCollectionPlatformTestManager;

@interface SPTNowPlayingCollectionButton : SPTNowPlayingButton <SPTNowPlayingCollectionButton>
{
    UIColor *_iconColor;
    UIColor *_addedIconColor;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    struct CGSize _iconSize;
}

+ (id)collectionButtonWithTestManager:(id)arg1;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(retain, nonatomic) UIColor *addedIconColor; // @synthesize addedIconColor=_addedIconColor;
- (void)setIconColor:(id)arg1;
- (id)iconColor;
- (void)setIconSize:(struct CGSize)arg1;
- (struct CGSize)iconSize;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (void)applyNPVTheme;
- (id)initWithFrame:(struct CGRect)arg1 collectionTestManager:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)applyIcon;
@property(nonatomic, getter=isInCollection) _Bool inCollection;

// Remaining properties
@property(nonatomic) unsigned long long buttonState; // @dynamic buttonState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
