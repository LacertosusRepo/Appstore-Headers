//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol PDLPhoneNumberUtil <NSObject>
- (_Bool)isValidPhoneNumber:(NSString *)arg1;
- (NSString *)internationalPrefixForCurrentLocale;
- (NSArray *)convertToAllFormats:(NSString *)arg1;
- (NSString *)convertPhoneNumberToE164Format:(NSString *)arg1;
@end

