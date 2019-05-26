//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IDWidget.h"

@class IDPreview, IDPreviewModel;

@interface IDPreviewableWidget : IDWidget
{
    IDPreview *_preview;
    IDPreviewModel *_previewModel;
}

@property(readonly, nonatomic) IDPreviewModel *previewModel; // @synthesize previewModel=_previewModel;
@property(retain, nonatomic) IDPreview *preview; // @synthesize preview=_preview;
- (void).cxx_destruct;
- (void)setPreview:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (id)initWithWidgetId:(long long)arg1;
- (id)initWithWidgetId:(long long)arg1 previewModel:(id)arg2;

@end

