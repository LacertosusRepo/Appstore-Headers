//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;
@protocol SPTSponsoredContextViewModelDelegate;

@protocol SPTSponsoredContextViewModel <NSObject>
@property(readonly, nonatomic) NSString *sponsoredContextAccessibilityHint;
@property(readonly, nonatomic) NSString *sponsoredContextAccessibilityLabel;
@property(readonly, nonatomic) NSString *sponsoredMessage;
@property(readonly, nonatomic) UIImage *sponsoredImage;
@property(nonatomic) __weak id <SPTSponsoredContextViewModelDelegate> delegate;
- (void)sponsoredContextTapped:(id)arg1;
- (void)logImpression;
- (void)sponsoredContextInFocus:(_Bool)arg1;
@end

