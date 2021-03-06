//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTLoginLogger;

@interface SPTLoginErrorDialogLogger : NSObject
{
    id <SPTLoginLogger> _logger;
    NSString *_screenIdentifier;
    NSString *_dialogIdentifier;
}

@property(readonly, copy, nonatomic) NSString *dialogIdentifier; // @synthesize dialogIdentifier=_dialogIdentifier;
@property(readonly, copy, nonatomic) NSString *screenIdentifier; // @synthesize screenIdentifier=_screenIdentifier;
@property(readonly, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)logUserDidSeeErrorDialogWithError:(long long)arg1;
- (id)initWithLogger:(id)arg1 screenIdentifier:(id)arg2 dialogIdentifier:(id)arg3;

@end

