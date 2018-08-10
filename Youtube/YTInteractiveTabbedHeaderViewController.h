//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "YTResponseViewController.h"
#import "YTVariableHeightHeaderViewControllerAttachedHeader.h"

@class GIMMe, NSArray, NSString, YTIInteractiveTabbedHeaderRenderer, YTSubscribeSwitchController;

@interface YTInteractiveTabbedHeaderViewController : UIViewController <YTVariableHeightHeaderViewControllerAttachedHeader, YTResponseViewController>
{
    YTIInteractiveTabbedHeaderRenderer *_renderer;
    NSArray *_thumbnailControllers;
    YTSubscribeSwitchController *_subscribeSwitchController;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)thumbnailControllersForThumbnailMappings:(id)arg1;
- (id)interactiveTabbedHeaderView;
- (_Bool)isAttachedToPage;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)willMakeRequest:(id)arg1;
- (void)loadWithModel:(id)arg1;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;

@end
