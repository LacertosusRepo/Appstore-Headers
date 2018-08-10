//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIColor, UIView;

@protocol SPTFreeTierYourLikesArtistViewModel <NSObject>
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) UIColor *feedbackIconColor;
@property(readonly, nonatomic) long long feedbackIcon;
@property(readonly, nonatomic) NSURL *artistImageURL;
- (void)presentContextMenu:(UIView *)arg1;
- (void)navigateToArtist;
@end

