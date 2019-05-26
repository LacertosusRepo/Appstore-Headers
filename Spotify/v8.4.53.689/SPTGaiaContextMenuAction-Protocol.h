//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTContextMenuAction.h"

@class NSString, SPTGaiaDevice;

@protocol SPTGaiaContextMenuAction <SPTContextMenuAction>
@property(nonatomic) __weak id <SPTGaiaContextMenuActionDelegate> delegate;
@property(readonly, nonatomic) _Bool supportsAutomaticFiltering;
@property(readonly, nonatomic) _Bool available;
@property(readonly, nonatomic) NSString *identifier;
@property(retain, nonatomic) SPTGaiaDevice *device;

@optional
+ (NSString *)featureIdentifier;
+ (NSString *)featureTitle;
- (SPTGaiaDevice *)incarnationForDevice:(SPTGaiaDevice *)arg1;
@end
