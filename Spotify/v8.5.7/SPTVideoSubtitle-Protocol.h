//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol SPTVideoSubtitle;

@protocol SPTVideoSubtitle <NSObject>
- (unsigned long long)compareScore:(id <SPTVideoSubtitle>)arg1;
- (_Bool)isOffSubtitle;
- (_Bool)isClosedCaption;
- (NSString *)language;
- (NSString *)langtag;
- (NSArray *)components;
@end

