//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LOTValueInterpolator.h"

@protocol LOTPointValueDelegate;

@interface LOTPointInterpolator : LOTValueInterpolator
{
    id <LOTPointValueDelegate> _delegate;
}

@property(nonatomic) __weak id <LOTPointValueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setValueDelegate:(id)arg1;
- (_Bool)hasDelegateOverride;
- (struct CGPoint)pointValueForFrame:(id)arg1;

@end
