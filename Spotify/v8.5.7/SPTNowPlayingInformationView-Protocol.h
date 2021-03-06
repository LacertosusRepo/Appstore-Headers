//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIButton, UILabel;

@protocol SPTNowPlayingInformationView <NSObject>
@property(readonly, copy, nonatomic) NSString *artistName;
@property(readonly, copy, nonatomic) NSString *trackTitle;
@property(readonly, nonatomic) UIButton *labelButton;
@property(readonly, nonatomic) UILabel *rightAccessoryIndicator;
@property(readonly, nonatomic) UILabel *leftAccessoryIndicator;
@property(retain, nonatomic) UIButton *rightAccessoryButton;
@property(retain, nonatomic) UIButton *leftAccessoryButton;
- (void)resetLayout;
@end

