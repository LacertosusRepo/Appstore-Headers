//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCORStreamingConfigurationBuilder : NSObject
{
    struct Builder {
        struct CriticalSection;
        struct streamingConfigurationParams;
    } *_cppBuilder;
}

@property(nonatomic) _Bool systemClockJumpDetection;
@property(copy) NSArray *restrictedPublishersList;
- (struct Builder *)getCppBuilder;
- (void)setCppBuilder:(struct Builder *)arg1;
- (id)build;
- (void)dealloc;
- (id)init;

@end

