//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UIStepperTouchInjection : NSObject
{
}

+ (void)stopTimer:(id)arg1;
+ (void)keepRunning:(id)arg1;
+ (void)runOnce:(id)arg1;
+ (unsigned long long)stepModeForLocation:(struct CGPoint)arg1 andStepper:(id)arg2;
+ (void)view:(id)arg1 handleTouchUpOutside:(id)arg2;
+ (void)view:(id)arg1 handleTouchMoveOutside:(id)arg2;
+ (void)view:(id)arg1 handleTouchCancel:(id)arg2;
+ (void)view:(id)arg1 handleTouchUp:(id)arg2;
+ (void)view:(id)arg1 handleTouchMove:(id)arg2;
+ (void)view:(id)arg1 handleTouchDown:(id)arg2;
+ (_Bool)isActive:(id)arg1;
+ (_Bool)shouldHandleEventsForSubviews;
+ (long long)view:(id)arg1 handleTouchEvent:(id)arg2;

@end

