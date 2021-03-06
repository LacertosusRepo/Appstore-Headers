//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class UIView, YTSearchFilters;

@interface YTShowSearchFiltersResponderEvent : YTResponderEvent
{
    _Bool _saveChangesWhileExiting;
    _Bool _hasContentTypeSection;
    UIView *_inView;
    YTSearchFilters *_searchFilters;
    id _target;
    SEL _action;
    struct CGRect _fromRect;
}

+ (id)eventWithSearchFilters:(id)arg1 view:(id)arg2 fromRect:(struct CGRect)arg3 target:(id)arg4 action:(SEL)arg5 saveChangesWhileExiting:(_Bool)arg6 hasContentTypeSection:(_Bool)arg7 firstResponder:(id)arg8;
+ (id)eventWithSearchFilters:(id)arg1 view:(id)arg2 fromRect:(struct CGRect)arg3 target:(id)arg4 action:(SEL)arg5 firstResponder:(id)arg6;
+ (id)eventWithView:(id)arg1 fromRect:(struct CGRect)arg2 firstResponder:(id)arg3;
@property(readonly, nonatomic) _Bool hasContentTypeSection; // @synthesize hasContentTypeSection=_hasContentTypeSection;
@property(readonly, nonatomic) _Bool saveChangesWhileExiting; // @synthesize saveChangesWhileExiting=_saveChangesWhileExiting;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
@property(readonly, nonatomic) YTSearchFilters *searchFilters; // @synthesize searchFilters=_searchFilters;
@property(readonly, nonatomic) UIView *inView; // @synthesize inView=_inView;
@property(readonly, nonatomic) struct CGRect fromRect; // @synthesize fromRect=_fromRect;
- (void).cxx_destruct;
- (id)initWithSearchFilters:(id)arg1 view:(id)arg2 fromRect:(struct CGRect)arg3 target:(id)arg4 action:(SEL)arg5 saveChangesWhileExiting:(_Bool)arg6 hasContentTypeSection:(_Bool)arg7 firstResponder:(id)arg8;

@end

