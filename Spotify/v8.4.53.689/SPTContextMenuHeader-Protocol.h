//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIImage;

@protocol SPTContextMenuHeader <NSObject>

@optional
@property(readonly, nonatomic) NSURL *headerImageURL;
@property(retain, nonatomic) NSString *title;
- (void)setImage:(UIImage *)arg1 animated:(_Bool)arg2;
- (struct CGSize)preferredImageSize;
- (double)preferredHeight;
@end

