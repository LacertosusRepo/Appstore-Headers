//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTConcertsEntityHeaderViewModel, UIImage;

@protocol SPTConcertsEntityHeaderViewModelDelegate <NSObject>
- (void)headerViewModel:(SPTConcertsEntityHeaderViewModel *)arg1 didUpdatePrimaryImage:(UIImage *)arg2 shouldAnimate:(_Bool)arg3;
- (void)updateContentForHeaderViewModel:(SPTConcertsEntityHeaderViewModel *)arg1;
@end

