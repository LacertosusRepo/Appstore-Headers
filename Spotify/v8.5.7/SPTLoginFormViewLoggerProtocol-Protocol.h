//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTLoginFormViewLoggerProtocol <NSObject>
- (NSString *)adjustIdentifierForFieldWithStringIdentifier:(NSString *)arg1;
- (void)logErrorWithCode:(unsigned long long)arg1 fieldIdentifier:(NSString *)arg2;
- (void)logUserDidTapSubmitButton;
- (void)logUserDidInteractWithField:(NSString *)arg1;
- (void)logUserDidSeeView;
@end
