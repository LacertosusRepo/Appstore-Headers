//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPTFreeTierCollectionEntityModel <NSObject>
@property(readonly, nonatomic) unsigned long long numberItems;
@property(readonly, nonatomic) _Bool hasHiddenContent;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(nonatomic) __weak id <SPTFreeTierCollectionEntityModelDelegate> delegate;
- (id <SPTFreeTierCollectionModelItemEntity>)itemAtIndex:(unsigned long long)arg1;
- (void)loadModel;
@end

