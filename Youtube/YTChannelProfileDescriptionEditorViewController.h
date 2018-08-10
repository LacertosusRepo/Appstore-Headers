//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTStyledViewController.h"

#import "GOOTextFieldValidator.h"
#import "YTChannelProfileFieldEditorProtocol.h"
#import "YTPageStyleProvider.h"
#import "YTSystemNotificationsObserver.h"

@class GIMMe, NSString, YTIChannelProfileDescriptionEditorRenderer;

@interface YTChannelProfileDescriptionEditorViewController : YTStyledViewController <GOOTextFieldValidator, YTPageStyleProvider, YTSystemNotificationsObserver, YTChannelProfileFieldEditorProtocol>
{
    YTIChannelProfileDescriptionEditorRenderer *_renderer;
}

- (void).cxx_destruct;
- (id)editorView;
- (void)fillTextField:(id)arg1 withRenderer:(id)arg2;
- (_Bool)hasAngleBrackets:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)saveWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)title;
- (id)validationResultsForTextField:(id)arg1;
@property(readonly, nonatomic) long long pageStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1 renderer:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) long long announcementFrequency;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

