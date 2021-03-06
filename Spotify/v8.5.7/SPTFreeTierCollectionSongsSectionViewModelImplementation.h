//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierCollectionSongsSectionViewModel-Protocol.h"

@class NSString;

@interface SPTFreeTierCollectionSongsSectionViewModelImplementation : NSObject <SPTFreeTierCollectionSongsSectionViewModel>
{
    NSString *_title;
    NSString *_actionTitle;
    long long _type;
}

+ (id)songsSectionHeaderViewModelForEmptyTopPadding;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 actionTitle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

