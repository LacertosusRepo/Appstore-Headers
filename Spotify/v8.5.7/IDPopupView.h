//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IDView.h"

@class IDEvent;

@interface IDPopupView : IDView
{
    IDEvent *_popupEvent;
}

@property(readonly, nonatomic) IDEvent *popupEvent; // @synthesize popupEvent=_popupEvent;
- (void).cxx_destruct;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (void)triggerPopupEvent:(_Bool)arg1;
- (void)dismiss;
- (void)show;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3 popupEvent:(long long)arg4;

@end

