//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "SPTAdjustableAlignmentRectInsets-Protocol.h"

@class NSString;

@interface SPTTextBarButton : UIButton <SPTAdjustableAlignmentRectInsets>
{
    struct UIEdgeInsets _spt_alignmentRectInsets;
}

+ (id)textButtonWithTarget:(id)arg1 action:(SEL)arg2;
@property(nonatomic) struct UIEdgeInsets spt_alignmentRectInsets; // @synthesize spt_alignmentRectInsets=_spt_alignmentRectInsets;
- (struct UIEdgeInsets)alignmentRectInsets;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

