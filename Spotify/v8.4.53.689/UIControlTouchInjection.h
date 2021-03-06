//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UIControlTouchInjection : NSObject
{
}

+ (void)controlSendActionCancel:(id)arg1 withTouch:(id)arg2;
+ (void)controlSendActionUp:(id)arg1 isInside:(_Bool)arg2 withTouch:(id)arg3;
+ (void)controlSendActionMove:(id)arg1 isInside:(_Bool)arg2;
+ (void)controlSendActionDown:(id)arg1 withTouch:(id)arg2;
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

