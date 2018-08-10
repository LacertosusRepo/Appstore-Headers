//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDPreviewableWidget.h"

#import "IDFocusable.h"
#import "IDHmiActionDelegate.h"

@class IDHmiAction, IDImageData, IDModel, IDView, NSString;

@interface IDBasicButton : IDPreviewableWidget <IDHmiActionDelegate, IDFocusable>
{
    IDView *_targetView;
    IDModel *_imageModel;
    IDHmiAction *_focusAction;
    IDHmiAction *_selectAction;
    id _selectTarget;
    SEL _selectSelector;
    id _focusTarget;
    SEL _focusSelector;
}

@property(nonatomic) SEL focusSelector; // @synthesize focusSelector=_focusSelector;
@property(nonatomic) id focusTarget; // @synthesize focusTarget=_focusTarget;
@property(nonatomic) SEL selectSelector; // @synthesize selectSelector=_selectSelector;
@property(nonatomic) id selectTarget; // @synthesize selectTarget=_selectTarget;
@property(readonly, nonatomic) IDHmiAction *selectAction; // @synthesize selectAction=_selectAction;
@property(readonly, nonatomic) IDHmiAction *focusAction; // @synthesize focusAction=_focusAction;
@property(readonly, nonatomic) IDModel *imageModel; // @synthesize imageModel=_imageModel;
@property(nonatomic) __weak IDView *targetView; // @synthesize targetView=_targetView;
- (void).cxx_destruct;
- (void)handleAction:(id)arg1 info:(id)arg2;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
@property(nonatomic) long long imageId;
@property(retain, nonatomic) IDImageData *image;
- (void)setTarget:(id)arg1 selector:(SEL)arg2 forActionEvent:(unsigned long long)arg3;
- (id)initWithWidgetId:(long long)arg1 previewModel:(id)arg2;
- (id)initWithWidgetId:(long long)arg1 imageModel:(id)arg2 targetModel:(id)arg3 actionId:(long long)arg4 focusId:(long long)arg5;
- (id)initWithWidgetId:(long long)arg1 imageModel:(id)arg2 previewModel:(id)arg3 focusAction:(id)arg4 selectAction:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

