//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface UIWebViewTouchInjection : NSObject
{
}

+ (id)detectedScrollMovement:(id)arg1 forTouch:(id)arg2;
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

