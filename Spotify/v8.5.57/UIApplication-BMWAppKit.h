//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

@interface UIApplication (BMWAppKit)
+ (_Bool)isTargetedForSimulator;
+ (id)cachesDirectoryPath;
+ (id)cachesDirectoryURL;
+ (id)supportedURLSchemes;
+ (_Bool)supportsExternalAccessoryProtocolString:(id)arg1;
+ (id)supportedProtocolsWithRangeOfIndexes:(struct _NSRange)arg1;
+ (id)requiredProtocolsForMultisession;
+ (_Bool)hasAllRequiredProtocolsForMultisession;
+ (id)randomNegotiationProtocol;
+ (id)preselectableCommunicationProtocols;
+ (id)negotiationProtocols;
+ (id)communicationProtocols;
+ (id)legacyCommunicationProtocol;
@property(readonly, nonatomic) double spt_maxSafeAreaInsets;
- (id)spt_rootView;
- (void)spt_safelyExit:(int)arg1;
- (void)spt_safelyExit;
@end

