//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTImageLoaderDelegate.h"
#import "UITextViewDelegate.h"

@class GLUEButton, GLUELabel, NSString, NSURL, SPTLayoutConstraintBuilder, SPTPodmark, SPTSharePodmarkView, UIButton, UIImage, UITextView, UIView;

@interface SPTPodmarksEditViewController : UIViewController <UITextViewDelegate, SPTImageLoaderDelegate>
{
    id <SPTPodmarksEditViewControllerDelegate> _delegate;
    NSURL *_episodeURL;
    id <SPTImageLoader> _imageLoader;
    id <GLUETheme> _theme;
    SPTLayoutConstraintBuilder *_layout;
    UIView *_navBarView;
    UIButton *_cancelButton;
    GLUELabel *_navbarTitleLabel;
    UITextView *_noteTextView;
    SPTSharePodmarkView *_sharePodmarksView;
    GLUELabel *_sharingSectionTitleLabel;
    GLUEButton *_saveButton;
    SPTPodmark *_podmark;
    UIImage *_headerImage;
}

@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property(retain, nonatomic) SPTPodmark *podmark; // @synthesize podmark=_podmark;
@property(retain, nonatomic) GLUEButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) GLUELabel *sharingSectionTitleLabel; // @synthesize sharingSectionTitleLabel=_sharingSectionTitleLabel;
@property(retain, nonatomic) SPTSharePodmarkView *sharePodmarksView; // @synthesize sharePodmarksView=_sharePodmarksView;
@property(retain, nonatomic) UITextView *noteTextView; // @synthesize noteTextView=_noteTextView;
@property(retain, nonatomic) GLUELabel *navbarTitleLabel; // @synthesize navbarTitleLabel=_navbarTitleLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *navBarView; // @synthesize navBarView=_navBarView;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) NSURL *episodeURL; // @synthesize episodeURL=_episodeURL;
@property(nonatomic) __weak id <SPTPodmarksEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)saveNewPodmark;
- (void)updateWithPodmark:(id)arg1;
- (void)dismissPodmarksVC;
- (void)addViewConstraints;
- (void)setupButton;
- (void)setupHeaderView;
- (void)setupTextFields;
- (void)setupNavBarView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithEpisodeURL:(id)arg1 imageLoader:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

