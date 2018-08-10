//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HUBComponentWrapper, NSString;

@interface HUBComponentImageLoadingContext : NSObject
{
    long long _imageType;
    NSString *_imageIdentifier;
    HUBComponentWrapper *_wrapper;
    double _timestamp;
}

@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) __weak HUBComponentWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(readonly, copy, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
@property(readonly, nonatomic) long long imageType; // @synthesize imageType=_imageType;
- (void).cxx_destruct;
- (id)initWithImageType:(long long)arg1 imageIdentifier:(id)arg2 wrapper:(id)arg3 timestamp:(double)arg4;

@end

