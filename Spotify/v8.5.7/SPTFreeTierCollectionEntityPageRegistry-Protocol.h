//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTFreeTierCollectionEntityPageRegistry <NSObject>
- (void)unregisterEntityPageProviderForIdentifier:(NSString *)arg1;
- (void)registerEntityPageProvider:(UIViewController<SPTFreeTierCollectionEntityPage> * (^)(id <SPTPageCreationContext>))arg1 identifier:(NSString *)arg2;
@end

