//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL, UIImage;

@protocol SPTShareEntityData <NSObject>
@property(nonatomic, readonly) NSArray *extraQueryItems;
@property(nonatomic, readonly) NSString *freeText;
@property(nonatomic, readonly) unsigned long long capability;
@property(nonatomic, readonly) UIImage *fullscreenBackgroundImage;
@property(nonatomic, readonly) NSString *logContext;
@property(nonatomic, readonly) NSString *clipboardLinkTitle;
@property(nonatomic, readonly) long long itemType;
@property(nonatomic, readonly) NSURL *itemImageURL;
@property(nonatomic, readonly) NSString *sourceName;
@property(nonatomic, readonly) NSString *creatorName;
@property(nonatomic, readonly) NSString *itemName;
@property(nonatomic, readonly) NSURL *itemContextSourceURI;
@property(nonatomic, readonly) NSURL *itemURI;
@end

