//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextMenuOptions-Protocol.h"

@class NSString;
@protocol SPTContextMenuSectionHeaderDelegate;

@interface SPTFreeTierArtistContextMenuOptions : NSObject <SPTContextMenuOptions>
{
    _Bool _shouldShowScannable;
    id <SPTContextMenuSectionHeaderDelegate> _sectionHeaderDelegate;
}

@property(nonatomic) _Bool shouldShowScannable; // @synthesize shouldShowScannable=_shouldShowScannable;
@property(retain, nonatomic) id <SPTContextMenuSectionHeaderDelegate> sectionHeaderDelegate; // @synthesize sectionHeaderDelegate=_sectionHeaderDelegate;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

