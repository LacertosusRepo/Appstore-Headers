//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SPTVoiceMicrophoneView : UIView
{
    _Bool _didSetupAnimations;
}

@property(nonatomic) _Bool didSetupAnimations; // @synthesize didSetupAnimations=_didSetupAnimations;
- (void)createCircleAnimationForKeyTimes:(id)arg1 layer:(id)arg2 size:(struct CGSize)arg3 alpha:(double)arg4;
- (void)setupAnimationInLayer:(id)arg1 withSize:(struct CGSize)arg2;
- (void)setupAnimations;

@end

