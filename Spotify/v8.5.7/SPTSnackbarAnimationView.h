//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol SPTSnackbarAnimationViewActionHanderDelegate;

@interface SPTSnackbarAnimationView : UIView
{
    id <SPTSnackbarAnimationViewActionHanderDelegate> _delegate;
}

@property(nonatomic) __weak id <SPTSnackbarAnimationViewActionHanderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)init;

@end
