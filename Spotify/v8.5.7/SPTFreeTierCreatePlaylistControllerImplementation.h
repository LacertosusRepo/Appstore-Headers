//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierCreatePlaylistController-Protocol.h"
#import "SPTFreeTierCreatePlaylistViewModelDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, SPTFreeTierCreatePlaylistGLUETheme;
@protocol SPTFreeTierCreatePlaylistControllerDelegate, SPTFreeTierCreatePlaylistTestManager, SPTFreeTierCreatePlaylistViewModel, SPTFreeTierPresentationModalPresenter;

@interface SPTFreeTierCreatePlaylistControllerImplementation : NSObject <UITextFieldDelegate, SPTFreeTierCreatePlaylistController, SPTFreeTierCreatePlaylistViewModelDelegate>
{
    id <SPTFreeTierCreatePlaylistControllerDelegate> delegate;
    id <SPTFreeTierCreatePlaylistViewModel> _viewModel;
    SPTFreeTierCreatePlaylistGLUETheme *_theme;
    id <SPTFreeTierCreatePlaylistTestManager> _testManager;
    id <SPTFreeTierPresentationModalPresenter> _modalPresenter;
}

@property(retain, nonatomic) id <SPTFreeTierPresentationModalPresenter> modalPresenter; // @synthesize modalPresenter=_modalPresenter;
@property(retain, nonatomic) id <SPTFreeTierCreatePlaylistTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTFreeTierCreatePlaylistGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTFreeTierCreatePlaylistViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTFreeTierCreatePlaylistControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)createPlaylistViewModel:(id)arg1 didRenamePlaylistWithURL:(id)arg2;
- (void)createPlaylistViewModel:(id)arg1 didCreatePlaylistWithURL:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)showRenamePlaylistAlert;
- (void)showCreatePlaylistAlert;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2 testManager:(id)arg3 modalPresenter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

