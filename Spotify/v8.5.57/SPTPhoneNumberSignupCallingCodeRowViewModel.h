//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTPhoneNumberSignupCallingCodeRowViewModel : NSObject
{
    NSString *_callingCode;
    NSString *_countryName;
    NSString *_countryCode;
}

@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(readonly, copy, nonatomic) NSString *callingCode; // @synthesize callingCode=_callingCode;
- (void).cxx_destruct;
- (id)initWithCallingCode:(id)arg1 countryName:(id)arg2 countryCode:(id)arg3;

@end

