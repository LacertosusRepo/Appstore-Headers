//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEtchSession, NSString;

@protocol IDEtchSessionCdsDelegate <NSObject>

@optional
- (void)session:(IDEtchSession *)arg1 cdsService:(long long)arg2 handlePropertyChanged:(NSString *)arg3 value:(NSString *)arg4;
- (void)session:(IDEtchSession *)arg1 cdsService:(long long)arg2 receivedProperty:(NSString *)arg3 value:(NSString *)arg4 requestIdentifier:(NSString *)arg5;
@end

