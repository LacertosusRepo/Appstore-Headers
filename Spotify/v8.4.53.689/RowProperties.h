//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RowProperties : NSObject
{
    long long _rowType;
    long long _groupIndex;
    long long _itemIndex;
    long long _targetScreenIndex;
}

@property long long targetScreenIndex; // @synthesize targetScreenIndex=_targetScreenIndex;
@property long long itemIndex; // @synthesize itemIndex=_itemIndex;
@property long long groupIndex; // @synthesize groupIndex=_groupIndex;
@property long long rowType; // @synthesize rowType=_rowType;
- (id)initWithRowType:(long long)arg1 withGroupIndex:(long long)arg2 withItemIndex:(long long)arg3 withTargetScreenIndex:(long long)arg4;

@end

