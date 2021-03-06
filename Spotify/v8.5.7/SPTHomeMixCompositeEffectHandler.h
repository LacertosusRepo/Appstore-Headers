//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeMixEffectHandler-Protocol.h"

@class NSArray, NSString;

@interface SPTHomeMixCompositeEffectHandler : NSObject <SPTHomeMixEffectHandler>
{
    NSArray *_effectHandlers;
}

@property(copy, nonatomic) NSArray *effectHandlers; // @synthesize effectHandlers=_effectHandlers;
- (void).cxx_destruct;
- (void)acceptNext:(id)arg1;
- (void)acceptEffect:(id)arg1 model:(id)arg2;
- (_Bool)canAcceptEffect:(id)arg1;
- (id)initWithComposedEffectHandlers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

