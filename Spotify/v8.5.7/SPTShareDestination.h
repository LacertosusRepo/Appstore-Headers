//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface SPTShareDestination : NSObject
{
    NSString *_title;
    UIImage *_icon;
    NSString *_URLScheme;
    NSString *_URLFormat;
    long long _destinationId;
}

+ (id)localizationMapping;
@property(nonatomic) long long destinationId; // @synthesize destinationId=_destinationId;
@property(readonly, nonatomic) NSString *URLFormat; // @synthesize URLFormat=_URLFormat;
@property(readonly, nonatomic) NSString *URLScheme; // @synthesize URLScheme=_URLScheme;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)loggingKey;
- (id)deeplinkURLWithShareText:(id)arg1;
- (void)processDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
