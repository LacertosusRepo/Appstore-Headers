//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface GCKColor : NSObject <NSCopying, NSSecureCoding>
{
    double _red;
    double _green;
    double _blue;
    double _alpha;
}

+ (id)white;
+ (id)yellow;
+ (id)magenta;
+ (id)cyan;
+ (id)blue;
+ (id)green;
+ (id)red;
+ (id)black;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) double blue; // @synthesize blue=_blue;
@property(readonly, nonatomic) double green; // @synthesize green=_green;
@property(readonly, nonatomic) double red; // @synthesize red=_red;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CSSString;
- (id)initWithCSSString:(id)arg1;
- (id)initWithCGColor:(struct CGColor *)arg1 alpha:(double)arg2;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithUIColor:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;

@end

