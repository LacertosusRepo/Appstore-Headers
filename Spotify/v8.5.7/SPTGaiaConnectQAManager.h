//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTGaiaConnectCosmosResolver;

@interface SPTGaiaConnectQAManager : NSObject
{
    SPTGaiaConnectCosmosResolver *_resolver;
}

@property(readonly, nonatomic) SPTGaiaConnectCosmosResolver *resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (void)clearNewlyDiscovered:(CDUnknownBlockType)arg1;
- (void)clearOnboarding:(CDUnknownBlockType)arg1;
- (id)initWithResolver:(id)arg1;

@end
