//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMKPlayerEventMediaCoverArt : NSObject
{
    NSString *_tiny;
    NSString *_small;
    NSString *_medium;
    NSString *_large;
    NSString *_full;
}

@property(readonly, nonatomic) NSString *full; // @synthesize full=_full;
@property(readonly, nonatomic) NSString *large; // @synthesize large=_large;
@property(readonly, nonatomic) NSString *medium; // @synthesize medium=_medium;
@property(readonly, nonatomic) NSString *small; // @synthesize small=_small;
@property(readonly, nonatomic) NSString *tiny; // @synthesize tiny=_tiny;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTiny:(id)arg1 small:(id)arg2 medium:(id)arg3 large:(id)arg4 full:(id)arg5;

@end

