//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCKPB_PBExtensionRange : NSObject
{
    struct GCKPB_PBMessageExtensionRangeDescription *description_;
}

@property(readonly, nonatomic) unsigned int end;
@property(readonly, nonatomic) unsigned int start;
- (id)initWithRangeDescription:(struct GCKPB_PBMessageExtensionRangeDescription *)arg1;

@end

