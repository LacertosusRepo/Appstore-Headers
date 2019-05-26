//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, UIColor, UIView, UIViewController;

@protocol SPTHiddenContentTrackViewModel <NSObject>
@property(readonly, nonatomic, getter=isPreviewEnabled) _Bool previewEnabled;
@property(readonly, nonatomic, getter=isExplicit) _Bool explicit;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *previewId;
@property(readonly, nonatomic) UIColor *feedbackIconColor;
@property(readonly, nonatomic) long long feedbackIcon;
@property(readonly, nonatomic) NSURL *albumImageURL;
- (void)stopPreviewTrack;
- (void)previewTrack;
- (void)presentContextMenuInViewController:(UIViewController *)arg1 senderView:(UIView *)arg2;
@end
