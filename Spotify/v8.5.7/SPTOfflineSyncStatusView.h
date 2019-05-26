//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView;

@interface SPTOfflineSyncStatusView : UIView
{
    _Bool _requiresIconUpdate;
    long long _status;
    UIImageView *_imageView;
    UIActivityIndicatorView *_activityIndicator;
}

+ (id)accessibilityLabelForStatus:(long long)arg1;
+ (id)offlineSyncStatusView;
@property(nonatomic) _Bool requiresIconUpdate; // @synthesize requiresIconUpdate=_requiresIconUpdate;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)layoutSubviews;

@end

