//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSlateDelegate.h"

@class NSString, NSURL, UIImage;

@interface SPTWazeSlateViewModel : NSObject <SPTSlateDelegate>
{
    NSString *_titleText;
    NSString *_descriptionText;
    NSString *_acceptButtonTitle;
    UIImage *_logoImage;
    UIImage *_backgroundImage;
    NSURL *_viewURI;
    id <SPTWazeSlateViewModelDelegate> _delegate;
}

@property(nonatomic) __weak id <SPTWazeSlateViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(readonly, nonatomic) UIImage *logoImage; // @synthesize logoImage=_logoImage;
@property(readonly, nonatomic) NSString *acceptButtonTitle; // @synthesize acceptButtonTitle=_acceptButtonTitle;
@property(readonly, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)slateDidDismiss:(id)arg1;
- (void)didTapAcceptButton;
- (id)initWithTitleText:(id)arg1 descriptionText:(id)arg2 acceptButtonTitle:(id)arg3 logoImage:(id)arg4 backgroundImage:(id)arg5 viewURI:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

