//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ANSLogger : NSObject
{
    _Bool _debugMode;
}

+ (id)sharedLogger;
@property(nonatomic) _Bool debugMode; // @synthesize debugMode=_debugMode;
- (void)internalLog:(id)arg1 args:(char *)arg2;
- (void)logWithLabel:(id)arg1 format:(id)arg2;
- (void)log:(id)arg1;

@end
