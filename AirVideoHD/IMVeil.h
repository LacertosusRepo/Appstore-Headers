//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface IMVeil : NSObject
{
    CDUnknownBlockType cancel;
    NSString *label;
    NSString *description;
    NSDate *durationSetDate;
    double duration;
    double progress;
    _Bool dirty;
    double delay;
}

@property(nonatomic) double delay; // @synthesize delay;
- (void).cxx_destruct;
@property(nonatomic) double duration;
@property(readonly, nonatomic) NSDate *durationSetDate;
@property(nonatomic) double progress;
@property(retain, nonatomic) NSString *description;
@property(retain, nonatomic) NSString *label;
@property(copy, nonatomic) CDUnknownBlockType cancel;
@property(readonly, nonatomic) _Bool dirty;
- (void)dealloc;
- (_Bool)visible;
- (void)show;
- (void)hide;
- (void)update;
- (void)connectionChanged;
- (void)doInit;
- (id)init;

@end

