//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString, UIImage;

@protocol SPTPlaylistMetadataView <NSObject>
@property(readonly, nonatomic) struct CGSize ownerImageSize;
@property(nonatomic) double totalDuration;
@property(retain, nonatomic) NSDate *lastModifiedDate;
@property(copy, nonatomic) NSString *ownerName;
@property(retain, nonatomic) UIImage *ownerImage;
@property(copy, nonatomic) NSString *descriptionText;
@end

