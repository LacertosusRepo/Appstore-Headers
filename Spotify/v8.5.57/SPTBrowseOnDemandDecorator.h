//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTOnDemandSet;

@interface SPTBrowseOnDemandDecorator : NSObject
{
    id <SPTOnDemandSet> _onDemandSet;
}

@property(readonly, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
- (void).cxx_destruct;
- (void)applyOnDemandDecorationToViewModelBuilder:(id)arg1;
- (void)decorateComponentModelBuilders:(id)arg1;
- (id)initWithOnDemandSet:(id)arg1;

@end
