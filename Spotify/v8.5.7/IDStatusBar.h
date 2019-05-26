//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEvent, IDModel, NSString;

@interface IDStatusBar : NSObject
{
    IDModel *_textModel;
    IDEvent *_updateStatusBarEvent;
}

+ (id)new;
@property(readonly, nonatomic) IDEvent *updateStatusBarEvent; // @synthesize updateStatusBarEvent=_updateStatusBarEvent;
@property(readonly, nonatomic) IDModel *textModel; // @synthesize textModel=_textModel;
- (void).cxx_destruct;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
@property(nonatomic) long long textId;
@property(retain, nonatomic) NSString *text;
- (id)init;
- (id)initWithTextModel:(id)arg1 updateEvent:(long long)arg2;

@end

