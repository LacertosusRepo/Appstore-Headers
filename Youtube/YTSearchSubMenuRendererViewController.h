//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "YTResponseViewController.h"
#import "YTVariableHeightHeaderViewControllerAttachedHeader.h"

@class GIMMe, NSString, YTGeoSearchDetailsView, YTISearchSubMenuRenderer;

@interface YTSearchSubMenuRendererViewController : UIViewController <YTResponseViewController, YTVariableHeightHeaderViewControllerAttachedHeader>
{
    YTISearchSubMenuRenderer *_renderer;
    id <YTInnerTubeUIService> _service;
    YTGeoSearchDetailsView *_view;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (_Bool)isAttachedToPage;
- (void)willMakeRequest:(id)arg1;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)loadWithModel:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;

@end
