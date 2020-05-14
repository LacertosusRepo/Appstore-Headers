//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol SPTPartnerIntegration <NSObject>
@property(readonly, nonatomic, getter=isInstalled) _Bool installed;
@property(readonly, nonatomic) UIImage *icon;
@property(readonly, nonatomic) NSString *redirectURIPath;
@property(readonly, nonatomic) NSString *redirectURI;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) NSString *name;
@end

