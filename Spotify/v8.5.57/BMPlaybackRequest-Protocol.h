//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDictionary, NSURL;

@protocol BMPlaybackRequest <NSCopying, NSObject>
@property(readonly, nonatomic, getter=isRoyaltyMedia) _Bool royaltyMedia;
@property(readonly, nonatomic, getter=isAudioOnlyAllowed) _Bool audioOnlyAllowed;
@property(readonly, nonatomic) NSDictionary *metadata;
@property(readonly, nonatomic) NSURL *mediaURL;
@end

