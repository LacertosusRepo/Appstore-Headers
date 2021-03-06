//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface SPTAppLogMessage : NSObject
{
    int _line;
    NSString *_message;
    NSString *_module;
    NSString *_file;
    NSDate *_date;
    long long _level;
}

@property(readonly, nonatomic) long long level; // @synthesize level=_level;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) int line; // @synthesize line=_line;
@property(readonly, copy, nonatomic) NSString *file; // @synthesize file=_file;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1 module:(id)arg2 file:(id)arg3 line:(int)arg4 date:(id)arg5 level:(int)arg6;

@end

