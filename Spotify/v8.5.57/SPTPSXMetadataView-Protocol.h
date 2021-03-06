//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString, UIImage;

@protocol SPTPSXMetadataView <NSObject>
@property(readonly, nonatomic) struct CGSize ownerImageSize;
@property(nonatomic) double totalDuration;
@property(retain, nonatomic) NSDate *lastModifiedDate;
@property(copy, nonatomic) NSString *ownerName;
@property(retain, nonatomic) UIImage *ownerImage;
@property(copy, nonatomic) NSString *descriptionText;
@end

