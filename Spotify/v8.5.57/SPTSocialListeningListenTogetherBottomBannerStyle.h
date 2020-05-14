//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, NSString, UIColor;

@interface SPTSocialListeningListenTogetherBottomBannerStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    double _height;
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_descriptionLabelStyle;
    GLUELabelStyle *_privacyDisclaimerLabelStyle;
    GLUEButtonStyle *_inviteButtonStyle;
    GLUEButtonStyle *_addSongsButtonStyle;
    GLUEButtonStyle *_queueButtonStyle;
}

@property(copy, nonatomic) GLUEButtonStyle *queueButtonStyle; // @synthesize queueButtonStyle=_queueButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *addSongsButtonStyle; // @synthesize addSongsButtonStyle=_addSongsButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *inviteButtonStyle; // @synthesize inviteButtonStyle=_inviteButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *privacyDisclaimerLabelStyle; // @synthesize privacyDisclaimerLabelStyle=_privacyDisclaimerLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *descriptionLabelStyle; // @synthesize descriptionLabelStyle=_descriptionLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToInviteStyle:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
