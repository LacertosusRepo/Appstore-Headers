//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIView;
@protocol SPTEncoreTrackRowDelegate;

@interface SPTEncoreTrackRow : NSObject
{
    MISSING_TYPE *component;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) UIView *uiView;
- (void)update:(id)arg1;
@property(nonatomic) __weak id <SPTEncoreTrackRowDelegate> delegate; // @synthesize delegate;

@end
