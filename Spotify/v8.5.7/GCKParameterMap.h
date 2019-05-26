//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableDictionary;
@protocol GCKParameterMapDelegate;

@interface GCKParameterMap : NSObject <NSCopying>
{
    NSMutableDictionary *_params;
    id <GCKParameterMapDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKParameterMapDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)notifyDidChangeValueOfKey:(id)arg1 from:(id)arg2 to:(id)arg3;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)clear;
- (_Bool)writeToURL:(id)arg1;
- (id)allKeys;
- (id)valueForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (double)doubleForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (void)removeKey:(id)arg1;
- (_Bool)containsKey:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)init;

@end

