//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIImage;

@protocol SPTShareEntityData <NSObject>
@property(retain, nonatomic) NSString *comment;
@property(retain, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *itemSubtitle;
@property(readonly, nonatomic) NSString *itemTitle;
@property(readonly, nonatomic) NSURL *webURI;
@property(readonly, nonatomic) NSString *logContext;
@property(readonly, nonatomic) UIImage *shareScreenshotImage;
@property(readonly, nonatomic) NSString *shareBrowselinkId;
@property(readonly, nonatomic) NSString *clipboardLinkTitle;
@property(readonly, nonatomic) unsigned long long itemType;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSString *sourceName;
@property(readonly, nonatomic) NSString *creatorName;
@property(readonly, nonatomic) NSString *itemName;
@property(readonly, nonatomic) NSURL *itemContextSourceURI;
@property(readonly, nonatomic) NSURL *itemURI;
@end
