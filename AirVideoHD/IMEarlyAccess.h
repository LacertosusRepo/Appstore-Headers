//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMEarlyAccess : NSObject
{
}

+ (id)instance;
@property(readonly, nonatomic) _Bool previewMode;
@property(nonatomic) _Bool enabled;
@property(readonly, nonatomic) _Bool configurable;
- (_Bool)isFree;
- (void)purchasesDidChange;
- (void)dealloc;
- (id)init;

@end
