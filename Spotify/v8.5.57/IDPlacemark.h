//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDImageData, NSString;

@interface IDPlacemark : NSObject
{
    NSString *_descriptionText;
    IDImageData *_image;
    IDImageData *_highlightedImage;
    NSString *_placemarkId;
    unsigned long long _cachedHash;
    struct CLLocationCoordinate2D _location;
}

+ (id)new;
@property unsigned long long cachedHash; // @synthesize cachedHash=_cachedHash;
@property(retain) NSString *placemarkId; // @synthesize placemarkId=_placemarkId;
@property(retain) IDImageData *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(retain) IDImageData *image; // @synthesize image=_image;
@property struct CLLocationCoordinate2D location; // @synthesize location=_location;
@property(copy) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithLocation:(struct CLLocationCoordinate2D)arg1;
- (id)initWithLocation:(struct CLLocationCoordinate2D)arg1 description:(id)arg2;
- (id)initWithLocation:(struct CLLocationCoordinate2D)arg1 description:(id)arg2 image:(id)arg3;
- (id)initWithLocation:(struct CLLocationCoordinate2D)arg1 description:(id)arg2 image:(id)arg3 highlightedImage:(id)arg4;

@end

