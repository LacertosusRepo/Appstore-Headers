//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBComponentImageDataBuilder-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSBundle, NSMutableDictionary, NSString, NSURL, UIImage;
@protocol EXP_HUBIconImageResolver;

@interface EXP_HUBComponentImageDataBuilderImplementation : NSObject <EXP_HUBComponentImageDataBuilder, NSCopying>
{
    NSURL *_URL;
    NSString *_placeholderIconIdentifier;
    UIImage *_localImage;
    NSMutableDictionary *_customData;
    NSBundle *_bundle;
    id <EXP_HUBIconImageResolver> _iconImageResolver;
}

@property(readonly, nonatomic) id <EXP_HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(nonatomic) __weak NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) NSMutableDictionary *customData; // @synthesize customData=_customData;
@property(retain, nonatomic) UIImage *localImage; // @synthesize localImage=_localImage;
@property(copy, nonatomic) NSString *placeholderIconIdentifier; // @synthesize placeholderIconIdentifier=_placeholderIconIdentifier;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)buildPlaceholderIcon;
- (id)buildWithIdentifier:(id)arg1 type:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addJSONDictionary:(id)arg1;
- (_Bool)addJSONData:(id)arg1 error:(id *)arg2;
- (id)initWithIconImageResolver:(id)arg1;

@end
