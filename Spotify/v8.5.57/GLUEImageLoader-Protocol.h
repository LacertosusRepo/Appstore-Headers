//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol GLUECancellableTask;

@protocol GLUEImageLoader <NSObject>
- (id <GLUECancellableTask>)loadImageForURL:(NSURL *)arg1 imageSize:(struct CGSize)arg2 completion:(void (^)(UIImage *, NSError *))arg3;
@end

