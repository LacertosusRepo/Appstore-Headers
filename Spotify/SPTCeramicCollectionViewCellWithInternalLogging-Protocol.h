//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTCeramicCollectionViewCellProtocol.h"

@class NSIndexPath;

@protocol SPTCeramicCollectionViewCellWithInternalLogging <SPTCeramicCollectionViewCellProtocol>
@property long long blockIndex;
@property(retain, nonatomic) NSIndexPath *indexPath;
@property(nonatomic) __weak id <SPTCeramicCollectionViewCellLoggingDelegate> loggingDelegate;
@end

