//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EXP_HUBComponentDefaults;
@protocol EXP_HUBIconImageResolver;

@interface EXP_HUBViewModelBuilderFactory : NSObject
{
    EXP_HUBComponentDefaults *_componentDefaults;
    id <EXP_HUBIconImageResolver> _iconImageResolver;
}

@property(readonly, nonatomic) id <EXP_HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) EXP_HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
- (void).cxx_destruct;
- (id)createBuilder;
- (id)initWithComponentDefaults:(id)arg1 iconImageResolver:(id)arg2;

@end

