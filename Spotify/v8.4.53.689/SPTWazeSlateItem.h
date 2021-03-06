//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSlateDataSource.h"

@class NSString, SPTWazeSlateViewModel;

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

