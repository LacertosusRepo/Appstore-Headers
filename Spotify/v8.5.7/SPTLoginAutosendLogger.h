//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLoginLogger;

@interface SPTLoginAutosendLogger : NSObject
{
    id <SPTLoginLogger> _logger;
}

@property(readonly, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)logUserDidTapTryAnotherPasswordButton;
- (void)logUserDidTapOpenEmailButton;
- (void)logUserDidTapOKButton;
- (void)logUserDidSeeDualButtonSlideUp;
- (void)logUserDidSeeSingleButtonSlideUp;
- (id)initWithLogger:(id)arg1;

@end

