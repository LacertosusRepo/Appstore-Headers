//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FBSDKSharingContent, FBSDKSharingDelegate;

@protocol FBSDKSharing <NSObject>
@property(nonatomic) _Bool shouldFailOnDataError;
@property(copy, nonatomic) id <FBSDKSharingContent> shareContent;
@property(nonatomic) __weak id <FBSDKSharingDelegate> delegate;
- (_Bool)validateWithError:(id *)arg1;
@end
