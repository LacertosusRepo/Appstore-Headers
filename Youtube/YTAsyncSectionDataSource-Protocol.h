//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol YTAsyncSectionDataSource <NSObject>

@optional
- (_Bool)shouldUseNodeForItemAtIndex:(long long)arg1;
- (ASCellNode * (^)(void))nodeBlockForSupplementaryElementOfKind:(NSString *)arg1 atIndex:(long long)arg2;
- (ASCellNode * (^)(void))nodeBlockForItemAtIndex:(long long)arg1;
- (CDStruct_90e057aa)constrainedSizeForNodeAtIndex:(long long)arg1 withSize:(struct CGSize)arg2;
@end
