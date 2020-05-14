//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HUBComponentDefaults;
@protocol HUBIconImageResolver;

@interface HUBViewModelBuilderFactory : NSObject
{
    HUBComponentDefaults *_componentDefaults;
    id <HUBIconImageResolver> _iconImageResolver;
}

@property(readonly, nonatomic) id <HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
- (void).cxx_destruct;
- (id)createBuilder;
- (id)initWithComponentDefaults:(id)arg1 iconImageResolver:(id)arg2;

@end

