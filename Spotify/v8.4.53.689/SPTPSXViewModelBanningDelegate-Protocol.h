//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol SPTPSXViewModelBanningDelegate <NSObject>
- (void)viewModel:(id <SPTPSXViewModel>)arg1 didFailToUnbanTrack:(id <SPTFormatListItemModel>)arg2 error:(NSError *)arg3;
- (void)viewModel:(id <SPTPSXViewModel>)arg1 didUnbanTrack:(id <SPTFormatListItemModel>)arg2;
- (void)viewModel:(id <SPTPSXViewModel>)arg1 didBeginUnbanningTrack:(id <SPTFormatListItemModel>)arg2;
@end

