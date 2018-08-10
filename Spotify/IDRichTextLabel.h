//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDWidget.h"

#import "IDHmiServiceLifecycleProtocol.h"

@class IDListModel, NSString;

@interface IDRichTextLabel : IDWidget <IDHmiServiceLifecycleProtocol>
{
    NSString *_text;
    long long _textId;
    IDListModel *_listModel;
}

@property(readonly, nonatomic) IDListModel *listModel; // @synthesize listModel=_listModel;
@property(nonatomic) long long textId; // @synthesize textId=_textId;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)flush;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (id)initWithWidgetId:(long long)arg1;
- (id)initWithWidgetId:(long long)arg1 richTextModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

