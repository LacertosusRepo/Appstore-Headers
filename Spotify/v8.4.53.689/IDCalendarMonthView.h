//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDView.h"

#import "IDHmiActionDelegate.h"

@class IDCalendarDate, IDHmiAction, IDListModel, IDModel, NSSet, NSString;

@interface IDCalendarMonthView : IDView <IDHmiActionDelegate>
{
    IDCalendarDate *_selectedDate;
    NSSet *_highlightedDates;
    IDView *_targetView;
    id <IDCalendarMonthViewDelegate> _calendarMonthViewDelegate;
    IDModel *_selectedDateModel;
    IDModel *_highlightedDatesModel;
    IDListModel *_listModel;
    IDHmiAction *_selectAction;
    IDHmiAction *_changeAction;
    unsigned long long _visibleMonth;
    unsigned long long _visibleYear;
}

@property(nonatomic) unsigned long long visibleYear; // @synthesize visibleYear=_visibleYear;
@property(nonatomic) unsigned long long visibleMonth; // @synthesize visibleMonth=_visibleMonth;
@property(retain, nonatomic) IDHmiAction *changeAction; // @synthesize changeAction=_changeAction;
@property(retain, nonatomic) IDHmiAction *selectAction; // @synthesize selectAction=_selectAction;
@property(readonly, nonatomic) IDListModel *listModel; // @synthesize listModel=_listModel;
@property(readonly, nonatomic) IDModel *highlightedDatesModel; // @synthesize highlightedDatesModel=_highlightedDatesModel;
@property(readonly, nonatomic) IDModel *selectedDateModel; // @synthesize selectedDateModel=_selectedDateModel;
@property(nonatomic) __weak id <IDCalendarMonthViewDelegate> calendarMonthViewDelegate; // @synthesize calendarMonthViewDelegate=_calendarMonthViewDelegate;
@property(nonatomic) __weak IDView *targetView; // @synthesize targetView=_targetView;
@property(retain, nonatomic) NSSet *highlightedDates; // @synthesize highlightedDates=_highlightedDates;
@property(retain, nonatomic) IDCalendarDate *selectedDate; // @synthesize selectedDate=_selectedDate;
- (void).cxx_destruct;
- (void)flushSelectedDateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)flushHighlightedDates;
- (void)handleChangeAction:(id)arg1;
- (void)handleSelectAction:(id)arg1;
- (void)handleAction:(id)arg1 info:(id)arg2;
- (void)handleHmiEvent:(id)arg1 info:(id)arg2;
- (id)allHmiServiceLifecycleObjects;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3;
- (id)initWithHmiState:(long long)arg1 focusEvent:(long long)arg2 selectedDateModel:(id)arg3 highlightedDatesModel:(id)arg4 selectAction:(id)arg5 changeAction:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

