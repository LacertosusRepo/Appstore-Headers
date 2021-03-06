//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSURL;

@protocol SPTOnDemandSet <NSObject>
@property(readonly, copy, nonatomic) NSSet *onDemandURLs;
- (void)removeObserver:(id <SPTOnDemandSetObserver>)arg1;
- (void)addObserver:(id <SPTOnDemandSetObserver>)arg1;
- (void)updateOnDemandSet:(NSSet *)arg1;
- (_Bool)containsURL:(NSURL *)arg1;
@end

