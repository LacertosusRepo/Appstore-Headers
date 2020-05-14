//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IDPreviewableWidget.h"

#import "IDFocusable-Protocol.h"

@class IDModel, IDProperty, NSString;

@interface IDLabel : IDPreviewableWidget <IDFocusable>
{
    IDProperty *_waitingAnimationProperty;
    IDProperty *_positionXProperty;
    IDProperty *_positionYProperty;
    IDModel *_textModel;
    struct CGPoint _position;
}

@property(readonly, nonatomic) IDModel *textModel; // @synthesize textModel=_textModel;
@property(retain, nonatomic) IDProperty *positionYProperty; // @synthesize positionYProperty=_positionYProperty;
@property(retain, nonatomic) IDProperty *positionXProperty; // @synthesize positionXProperty=_positionXProperty;
@property(retain, nonatomic) IDProperty *waitingAnimationProperty; // @synthesize waitingAnimationProperty=_waitingAnimationProperty;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
- (void).cxx_destruct;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
@property(nonatomic) _Bool waitingAnimation;
@property(nonatomic) long long textId;
@property(copy, nonatomic) NSString *text;
- (id)initWithWidgetId:(long long)arg1 previewModel:(id)arg2;
- (id)initWithWidgetId:(long long)arg1 model:(id)arg2;
- (id)initWithWidgetId:(long long)arg1 textModel:(id)arg2;
- (id)initWithWidgetId:(long long)arg1 textModel:(id)arg2 previewModel:(id)arg3;

@end

