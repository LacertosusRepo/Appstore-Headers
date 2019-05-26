//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponentFallbackHandler-Protocol.h"

@class NSString;

@interface HUBDefaultComponentFallbackHandler : NSObject <HUBComponentFallbackHandler>
{
    NSString *_defaultComponentNamespace;
    NSString *_defaultComponentName;
    CDUnknownBlockType _fallbackBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType fallbackBlock; // @synthesize fallbackBlock=_fallbackBlock;
@property(readonly, copy, nonatomic) NSString *defaultComponentName; // @synthesize defaultComponentName=_defaultComponentName;
@property(readonly, copy, nonatomic) NSString *defaultComponentNamespace; // @synthesize defaultComponentNamespace=_defaultComponentNamespace;
- (void).cxx_destruct;
- (id)createFallbackComponentForCategory:(id)arg1;
@property(readonly, copy, nonatomic) NSString *defaultComponentCategory;
- (id)initWithFallbackBlock:(CDUnknownBlockType)arg1;

@end
