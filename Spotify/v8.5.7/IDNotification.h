//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDNotification : NSObject
{
    long long _index;
    NSString *_title;
    NSString *_text;
}

+ (id)new;
@property(readonly) NSString *text; // @synthesize text=_text;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)propertyDescription;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqualToNotification:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithIndex:(long long)arg1 title:(id)arg2 text:(id)arg3;

@end
