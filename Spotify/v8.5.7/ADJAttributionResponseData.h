//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADJResponseData.h"

@class NSURL;

@interface ADJAttributionResponseData : ADJResponseData
{
    NSURL *_deeplink;
}

@property(retain, nonatomic) NSURL *deeplink; // @synthesize deeplink=_deeplink;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithActivityPackage:(id)arg1;

@end
