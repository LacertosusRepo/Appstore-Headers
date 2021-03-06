//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTAdVideoBaseContentView.h"

@class NSArray;

@interface SPTAdVideoContentView : SPTAdVideoBaseContentView
{
    _Bool _showsVideoControls;
    NSArray *_layoutConstraints;
}

@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
- (void)setShowsVideoControls:(_Bool)arg1;
- (_Bool)showsVideoControls;
- (void).cxx_destruct;
- (void)setShowsVideoControls:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateConstraints;
- (id)initWithVideoSurface:(id)arg1 theme:(id)arg2 skippable:(_Bool)arg3;

@end

