//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUBAutoEquatable.h"

#import "HUBIcon-Protocol.h"

@class NSString;
@protocol HUBIconImageResolver;

@interface HUBIconImplementation : HUBAutoEquatable <HUBIcon>
{
    _Bool _isPlaceholder;
    NSString *_identifier;
    id <HUBIconImageResolver> _imageResolver;
}

+ (id)ignoredAutoEquatablePropertyNames;
@property(readonly, nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, nonatomic) id <HUBIconImageResolver> imageResolver; // @synthesize imageResolver=_imageResolver;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)imageWithSize:(struct CGSize)arg1 color:(id)arg2;
- (id)initWithIdentifier:(id)arg1 imageResolver:(id)arg2 isPlaceholder:(_Bool)arg3;

@end
