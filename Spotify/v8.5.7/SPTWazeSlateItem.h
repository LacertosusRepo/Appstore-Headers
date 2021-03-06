//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSlateDataSource-Protocol.h"

@class NSString, SPTWazeSlateViewModel;
@protocol GLUETheme, SPTSlate;

@interface SPTWazeSlateItem : NSObject <SPTSlateDataSource>
{
    id <SPTSlate> _slate;
    SPTWazeSlateViewModel *_viewModel;
    id <GLUETheme> _glueTheme;
}

@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) SPTWazeSlateViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) id <SPTSlate> slate; // @synthesize slate=_slate;
- (void).cxx_destruct;
- (id)dismissTextForSlate:(id)arg1;
- (_Bool)shouldHideImageForSlate:(id)arg1;
- (id)contentUnitForSlateViewController:(id)arg1;
- (id)buildSlateWithBuilder:(id)arg1;
- (id)initWithSlateBuilder:(id)arg1 viewModel:(id)arg2 glueTheme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

