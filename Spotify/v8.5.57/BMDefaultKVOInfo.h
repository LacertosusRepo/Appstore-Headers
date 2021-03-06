//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BMDefaultKVOInfo : NSObject
{
    NSString *_keyPath;
    unsigned long long _options;
    CDUnknownBlockType _block;
    SEL _action;
}

@property(nonatomic) SEL action; // @synthesize action=_action;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithKeyPath:(id)arg1 options:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3 action:(SEL)arg4;

@end

