//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSignupFieldValidator-Protocol.h"

@class NSCalendar, NSString, SPTSignupAgeBackendValidator;

@interface SPTSignupAgeFieldValidator : NSObject <SPTSignupFieldValidator>
{
    NSCalendar *_calendar;
    SPTSignupAgeBackendValidator *_ageBackendValidator;
}

@property(retain, nonatomic) SPTSignupAgeBackendValidator *ageBackendValidator; // @synthesize ageBackendValidator=_ageBackendValidator;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (void).cxx_destruct;
- (void)validateObject:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)isBirthdayOldEnough:(id)arg1 now:(id)arg2 minNumberOfYears:(unsigned long long)arg3;
- (id)removeTimeFromDate:(id)arg1;
- (void)validateDate:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithAgeBackendValidator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

