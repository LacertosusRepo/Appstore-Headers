//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTGLViewInfo;

@protocol SPTGLRenderer <NSObject>
- (void)draw;
- (void)updateWithViewInfo:(SPTGLViewInfo *)arg1;
- (void)update;
- (void)setup;
- (void)setViewportForWidth:(int)arg1 height:(int)arg2;
@end

