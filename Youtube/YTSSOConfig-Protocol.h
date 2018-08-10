//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol YTSSOConfig <NSObject>
- (_Bool)enableSSOSFSafari;
- (_Bool)needsReauth;
- (_Bool)needsHelpKit;
- (_Bool)needsSharingEnabled;
- (_Bool)shouldUsePlusPages;
- (NSString *)apiaryClientID;

@optional
- (_Bool)shouldUseDynamicMenus;
- (_Bool)needsUDC;
- (_Bool)shouldUseUDC;
- (_Bool)isUnicornCompatible;
- (_Bool)removeAddAccount;
- (_Bool)requiresSignIn;
@end

