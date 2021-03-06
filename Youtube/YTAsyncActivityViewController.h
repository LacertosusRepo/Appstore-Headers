//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "QTMActivityIndicatorDelegate.h"
#import "YTResponder.h"

@class GIMMe, GOOAlertView, NSError, NSString, YTAsyncActivityView, YTThumbnailController;

@interface YTAsyncActivityViewController : UIViewController <QTMActivityIndicatorDelegate, YTResponder>
{
    YTAsyncActivityView *_view;
    GOOAlertView *_dialog;
    YTThumbnailController *_thumbnailContoller;
    _Bool _viewShouldDismiss;
    NSError *_error;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)didTapView;
- (void)cleanup;
- (void)dismissAndCleanup;
- (void)activityIndicatorAnimationDidFinish:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1 error:(id)arg2;
- (void)showActivityIndicatorWithRenderer:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

