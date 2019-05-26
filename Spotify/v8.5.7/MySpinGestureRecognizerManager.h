//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MySpinGestureRecognizerManager : NSObject
{
    NSMutableArray *adaptedGesturesList;
    double timestamp;
    NSMutableArray *_bufferedTouches;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *bufferedTouches; // @synthesize bufferedTouches=_bufferedTouches;
- (void).cxx_destruct;
- (_Bool)canBeginGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizerStateInProgress:(id)arg1;
- (id)mySpinGestureRecognizersForView:(id)arg1;
- (_Bool)handleGestureEventsForTouch:(id)arg1 forGestureRecognizers:(id)arg2;
- (void)forceDelayedGestureRecognizersToFail:(id)arg1;
- (void)handleDelayedEventsByGestureRecognizer:(id)arg1;
- (_Bool)handleGestureRecognizersWithEvents:(id)arg1;

@end

