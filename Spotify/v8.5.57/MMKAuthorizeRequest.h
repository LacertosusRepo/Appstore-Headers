//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MMKMessage.h"

@interface MMKAuthorizeRequest : MMKMessage
{
    _Bool _invalidateToken;
}

@property(readonly, nonatomic) _Bool invalidateToken; // @synthesize invalidateToken=_invalidateToken;
- (_Bool)isEqual:(id)arg1;
- (id)initWithInvalidateToken:(_Bool)arg1;

@end

