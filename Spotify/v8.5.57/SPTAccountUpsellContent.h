//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface SPTAccountUpsellContent : NSObject
{
    unsigned long long _type;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_image;
}

+ (id)informationWithImage:(id)arg1 title:(id)arg2 subtitile:(id)arg3;
+ (id)sectionHeaderWithTitle:(id)arg1;
+ (id)pageHeaderWithTitle:(id)arg1 subtitle:(id)arg2;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 title:(id)arg2 subtitle:(id)arg3;

@end
