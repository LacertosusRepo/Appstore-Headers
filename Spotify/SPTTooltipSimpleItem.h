//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTTooltipItem.h"

@class NSString;

@interface SPTTooltipSimpleItem : NSObject <SPTTooltipItem>
{
    _Bool _shouldBlockInteraction;
    _Bool _shouldHideCloseButton;
    _Bool _shouldDismissOnBackgroundTap;
    NSString *_localizedMessage;
}

+ (id)tooltipWithMessage:(id)arg1 blocksInteraction:(_Bool)arg2;
@property(nonatomic) _Bool shouldDismissOnBackgroundTap; // @synthesize shouldDismissOnBackgroundTap=_shouldDismissOnBackgroundTap;
@property(nonatomic) _Bool shouldHideCloseButton; // @synthesize shouldHideCloseButton=_shouldHideCloseButton;
@property(nonatomic) _Bool shouldBlockInteraction; // @synthesize shouldBlockInteraction=_shouldBlockInteraction;
@property(copy, nonatomic) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
- (void).cxx_destruct;
- (id)initWithLocalizedMessage:(id)arg1 blocksInteraction:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
