//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponent-Protocol.h"
#import "HUBComponentWithChildren-Protocol.h"

@class NSSet;
@protocol HUBComponentChildDelegate;

@interface SPTPremiumDestinationUIGradientComponent : NSObject <HUBComponent, HUBComponentWithChildren>
{
    id <HUBComponentChildDelegate> childDelegate;
}

@property(nonatomic) __weak id <HUBComponentChildDelegate> childDelegate; // @synthesize childDelegate;
- (void).cxx_destruct;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)createViewWithFrame:(struct CGRect)arg1;

@end

