//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LOTValueInterpolator.h"

@protocol LOTSizeValueDelegate;

@interface LOTSizeInterpolator : LOTValueInterpolator
{
    id <LOTSizeValueDelegate> _delegate;
}

@property(nonatomic) __weak id <LOTSizeValueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setValueDelegate:(id)arg1;
- (_Bool)hasDelegateOverride;
- (struct CGSize)sizeValueForFrame:(id)arg1;

@end

