//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponentFallbackHandler-Protocol.h"

@class NSString;

@interface SPTHugsComponentFallbackHandler : NSObject <HUBComponentFallbackHandler>
{
}

- (id)fallbackComponentForCategory:(id)arg1;
@property(readonly, copy, nonatomic) NSString *defaultComponentCategory;
@property(readonly, copy, nonatomic) NSString *defaultComponentName;
@property(readonly, copy, nonatomic) NSString *defaultComponentNamespace;

@end
