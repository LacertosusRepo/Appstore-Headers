//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SPTAppLogMessage : NSObject
{
    NSString *_message;
    NSString *_module;
    NSString *_file;
    long long _line;
    NSDate *_date;
    long long _level;
}

@property(readonly, nonatomic) long long level; // @synthesize level=_level;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) long long line; // @synthesize line=_line;
@property(readonly, copy, nonatomic) NSString *file; // @synthesize file=_file;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)initWithMessage:(const char *)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(long long)arg4 date:(id)arg5 level:(int)arg6;

@end

