//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTHomeMixDomainModel, SPTHomeMixEffect, SPTHomeMixNext;

@protocol SPTHomeMixEffectHandler <NSObject>
- (void)acceptNext:(SPTHomeMixNext *)arg1;
- (void)acceptEffect:(SPTHomeMixEffect *)arg1 model:(SPTHomeMixDomainModel *)arg2;
- (_Bool)canAcceptEffect:(SPTHomeMixEffect *)arg1;
@end
