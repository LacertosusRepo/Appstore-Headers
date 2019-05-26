//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCanvasTrackChecker-Protocol.h"

@class NSString, SPTCanvasTestManager;

@interface SPTCanvasTrackCheckerImplementation : NSObject <SPTCanvasTrackChecker>
{
    SPTCanvasTestManager *_testManager;
}

@property(readonly, nonatomic) SPTCanvasTestManager *testManager; // @synthesize testManager=_testManager;
- (void).cxx_destruct;
- (id)canvasModelForTrack:(id)arg1 withPlaceholderURI:(id)arg2;
- (_Bool)isCanvasEnabledForTrack:(id)arg1;
- (id)initWithTestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
