//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMItemActions : NSObject
{
}

+ (void)showMoreMenuForItem:(id)arg1 itemHolder:(id)arg2 fromView:(id)arg3 thumbnailView:(id)arg4;
+ (void)deleteTappedForItem:(id)arg1 button:(id)arg2 done:(CDUnknownBlockType)arg3;
+ (void)convertTappedForItem:(id)arg1;
+ (void)downloadTappedForItem:(id)arg1 button:(id)arg2 longPress:(_Bool)arg3;
+ (void)downloadTappedForItem:(id)arg1 button:(id)arg2 longPress:(_Bool)arg3 upgrade:(CDUnknownBlockType)arg4;
+ (void)convertItem:(id)arg1 download:(_Bool)arg2 upgrade:(CDUnknownBlockType)arg3;

@end

