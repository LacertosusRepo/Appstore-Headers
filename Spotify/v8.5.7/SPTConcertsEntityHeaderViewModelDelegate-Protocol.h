//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTConcertsEntityHeaderViewModel, UIImage;

@protocol SPTConcertsEntityHeaderViewModelDelegate <NSObject>
- (void)headerViewModel:(SPTConcertsEntityHeaderViewModel *)arg1 didUpdatePrimaryImage:(UIImage *)arg2 shouldAnimate:(_Bool)arg3;
- (void)updateContentForHeaderViewModel:(SPTConcertsEntityHeaderViewModel *)arg1;
@end

