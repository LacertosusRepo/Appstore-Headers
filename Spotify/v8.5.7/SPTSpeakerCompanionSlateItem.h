//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSlateDataSource-Protocol.h"
#import "SPTSlateDelegate-Protocol.h"
#import "SPTSlateViewDataSource-Protocol.h"

@class NSString, SPTSpeakerCompanionEntityFeedbackViewModel;
@protocol GLUEImageLoader, GLUETheme, SPTSlate;

@interface SPTSpeakerCompanionSlateItem : NSObject <SPTSlateDataSource, SPTSlateDelegate, SPTSlateViewDataSource>
{
    id <SPTSlate> _slate;
    SPTSpeakerCompanionEntityFeedbackViewModel *_viewModel;
    id <GLUEImageLoader> _glueImageLoader;
    id <GLUETheme> _glueTheme;
}

@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) SPTSpeakerCompanionEntityFeedbackViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) id <SPTSlate> slate; // @synthesize slate=_slate;
- (void).cxx_destruct;
- (void)slateDidDismiss:(id)arg1;
- (_Bool)shouldAllowDragGesture;
- (_Bool)shouldFullscreen;
- (_Bool)shouldSuppressKeyboard;
- (_Bool)slateViewControllerShouldDismissOnSwipe:(id)arg1;
- (id)contentUnitForSlateViewController:(id)arg1;
- (id)dismissTextForSlate:(id)arg1;
- (_Bool)shouldHideImageForSlate:(id)arg1;
- (_Bool)slateShouldOnlyDismissOnFooterTap:(id)arg1;
- (_Bool)slateShouldDismiss:(id)arg1;
- (id)buildSlateWithBuilderProvider:(id)arg1;
- (id)initWithSlateBuilderProvider:(id)arg1 viewModel:(id)arg2 glueImageLoader:(id)arg3 glueTheme:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

