//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBComponent-Protocol.h"
#import "EXP_HUBComponentWithChildren-Protocol.h"

@class NSSet;
@protocol EXP_HUBComponentChildDelegate;

@interface SPTPremiumDestinationFlexboxImageComponent : NSObject <EXP_HUBComponent, EXP_HUBComponentWithChildren>
{
    id <EXP_HUBComponentChildDelegate> _childDelegate;
}

@property(nonatomic) __weak id <EXP_HUBComponentChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
- (void).cxx_destruct;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)createViewWithFrame:(struct CGRect)arg1;

@end

