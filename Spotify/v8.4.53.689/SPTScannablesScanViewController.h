//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPViewController.h"

#import "SPTPageController.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class CAGradientLayer, CALayer, GLUEButton, NSString, NSURL, SPTScannablesAuthorizationRequester, SPTScannablesDependencies, SPTScannablesScanViewModel, UIButton, UIFont, UIImageView, UILabel, UINavigationController<SPTScannablesImagePickerController>, UIView;

@interface SPTScannablesScanViewController : SPViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, SPTPageController>
{
    SPTScannablesScanViewModel *_viewModel;
    UINavigationController<SPTScannablesImagePickerController> *_imagePickerController;
    SPTScannablesAuthorizationRequester *_authorizationRequester;
    SPTScannablesDependencies *_dependencies;
    UIView *_overlayView;
    UIView *_captureView;
    UIButton *_closeButton;
    GLUEButton *_photoLibraryButton;
    UIImageView *_scanningIndicatorImageView;
    UILabel *_subtitleLabel;
    CALayer *_captureLayer;
    CAGradientLayer *_backgroundGradientTop;
    CAGradientLayer *_backgroundGradientBottom;
    CALayer *_viewfinderLayer;
    CALayer *_viewfinderStrokeLayer;
    double _internalVerticalMargin;
    UIFont *_subtitleFont;
}

+ (id)sta_currentContext;
@property(retain, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(nonatomic) double internalVerticalMargin; // @synthesize internalVerticalMargin=_internalVerticalMargin;
@property(retain, nonatomic) CALayer *viewfinderStrokeLayer; // @synthesize viewfinderStrokeLayer=_viewfinderStrokeLayer;
@property(retain, nonatomic) CALayer *viewfinderLayer; // @synthesize viewfinderLayer=_viewfinderLayer;
@property(retain, nonatomic) CAGradientLayer *backgroundGradientBottom; // @synthesize backgroundGradientBottom=_backgroundGradientBottom;
@property(retain, nonatomic) CAGradientLayer *backgroundGradientTop; // @synthesize backgroundGradientTop=_backgroundGradientTop;
@property(retain, nonatomic) CALayer *captureLayer; // @synthesize captureLayer=_captureLayer;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UIImageView *scanningIndicatorImageView; // @synthesize scanningIndicatorImageView=_scanningIndicatorImageView;
@property(retain, nonatomic) GLUEButton *photoLibraryButton; // @synthesize photoLibraryButton=_photoLibraryButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *captureView; // @synthesize captureView=_captureView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) SPTScannablesDependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(readonly, nonatomic) SPTScannablesAuthorizationRequester *authorizationRequester; // @synthesize authorizationRequester=_authorizationRequester;
@property(readonly, nonatomic) UINavigationController<SPTScannablesImagePickerController> *imagePickerController; // @synthesize imagePickerController=_imagePickerController;
@property(readonly, nonatomic) SPTScannablesScanViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (_Bool)imagePickerControllerIsPresented;
- (long long)preferredStatusBarStyle;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)alertControllerDidAcceptError;
- (id)URI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)addAndLayoutViewFinderLayer;
- (void)layoutOverlayView;
- (void)layoutPhotoLibraryButton;
- (void)layoutSubtitleLabel;
- (void)layoutScanningIndicatorImageView;
- (void)layoutCaptureLayer;
- (void)layoutCloseButton;
- (void)addCaptureLayer:(id)arg1;
- (void)drawSmallPath:(id)arg1 forRect:(struct CGRect)arg2 cornerRadius:(double)arg3;
- (void)drawBigPath:(id)arg1 forRect:(struct CGRect)arg2;
- (id)provideStrokeLayerWithRect:(struct CGRect)arg1;
- (id)provideBackgroundViewfinderLayerWithBigRect:(struct CGRect)arg1;
- (struct CGRect)provideViewfinderRectWithBigRect:(struct CGRect)arg1;
- (void)addOverLayView;
- (void)addScanningIndicatorImageView;
- (id)provideBackgroundGratientBottom;
- (id)provideBackgroundGratientTop;
- (void)addPhotoLibraryButton;
- (void)addSubtitleLabel;
- (void)addCloseButton;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)presentPhotoLibrary;
- (void)didTapPhotoLibraryButton;
- (void)didTapCloseButton;
- (void)prepareView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 imagePickerController:(id)arg2 authorizationRequester:(id)arg3 dependencies:(id)arg4;
- (_Bool)sta_pressSelectFromPhotos;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

