//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConcertsEntityRowViewModel-Protocol.h"

@class NSString;

@interface SPTConcertsEntityAlbumRowViewModel : NSObject <SPTConcertsEntityRowViewModel>
{
    NSString *adornmentTitleText;
    NSString *adornmentSubtitleText;
    NSString *titleText;
    NSString *subtitleText;
}

@property(readonly, copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText;
@property(readonly, copy, nonatomic) NSString *adornmentSubtitleText; // @synthesize adornmentSubtitleText;
@property(readonly, copy, nonatomic) NSString *adornmentTitleText; // @synthesize adornmentTitleText;
- (void).cxx_destruct;
- (void)handleAccessoryTap;
- (void)handleTap;
@property(readonly, nonatomic) _Bool canBeTapped;
@property(readonly, nonatomic) unsigned long long kind;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

