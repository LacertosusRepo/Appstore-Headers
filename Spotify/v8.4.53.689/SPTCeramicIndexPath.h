//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSIndexPath.h"

@interface SPTCeramicIndexPath : NSIndexPath
{
}

+ (id)indexPathWithBlockIndex:(long long)arg1 collectionIndexPath:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long item;
@property(readonly, nonatomic) long long section;
@property(readonly, nonatomic) long long blockIndex;
- (id)initWithBlockIndex:(long long)arg1 collectionIndexPath:(id)arg2;

@end

