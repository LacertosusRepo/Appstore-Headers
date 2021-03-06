//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMLayoutAction.h"

@class NSArray;

@interface IMLayoutGroupAlignmentAction : IMLayoutAction
{
    NSArray *viewGroup;
    NSArray *toViewGroup;
    int type;
    int axis;
    double minOffset;
    double additionalOffset;
    double maxOffset;
}

+ (id)alignViews:(id)arg1 withAlignmentType:(int)arg2 axis:(int)arg3;
+ (id)alignViews:(id)arg1 relativeToViews:(id)arg2 withAlignmentType:(int)arg3 axis:(int)arg4;
@property(nonatomic) double maxOffset; // @synthesize maxOffset;
@property(nonatomic) double additionalOffset; // @synthesize additionalOffset;
@property(nonatomic) double minOffset; // @synthesize minOffset;
- (void).cxx_destruct;
- (void)perform:(id)arg1;
- (id)init;

@end

