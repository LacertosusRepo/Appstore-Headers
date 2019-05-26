//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SPTFreeTierCollectionGLUETheme;

@protocol SPTFreeTierCollectionTabControlProtocol <NSObject>
+ (id)new;
@property(readonly, nonatomic) unsigned long long numberOfSegments;
@property(nonatomic) unsigned long long selectedSegmentIndex;
@property(nonatomic) __weak id <SPTFreeTierCollectionTabControlDelegate> delegate;
- (id)init;
- (void)transitionTab:(double)arg1 scrollDirection:(unsigned long long)arg2;
- (void)removeAllSegments;
- (void)insertSegments:(NSArray *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 theme:(SPTFreeTierCollectionGLUETheme *)arg2;
@end
