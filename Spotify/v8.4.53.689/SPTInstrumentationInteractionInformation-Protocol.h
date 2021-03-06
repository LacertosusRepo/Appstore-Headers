//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIView, UIView<SPTInstrumentationInteractable>, UIViewController<SPTPageController>;

@protocol SPTInstrumentationInteractionInformation <NSObject>
- (NSDictionary *)instrumentableOrdinalViewsWithTerminatingView:(UIView *)arg1;
- (NSString *)interactionID;
- (UIViewController<SPTPageController> *)pageControllerForView;
- (struct CGPoint)interactionPointInView:(UIView *)arg1;
- (UIView<SPTInstrumentationInteractable> *)view;
@end

